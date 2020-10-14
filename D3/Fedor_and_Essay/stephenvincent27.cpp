#include <iostream>
#include <map>
#include <stack>
#include <string>
#include <vector>

#define N 100010
using namespace std;

vector<vector<int>> graph(N), graphRev(N), graph2(N);   // graph and graphRev are complementary graphs, graph2 is the condensed graph
stack<int> st;                                          // stack used for the first dfs, check out Kosaraju's algorithm
bool vis1[N], vis2[N], vis3[N];                         // visited arrays for the two dfs and the condensed graph

vector<string> dict;    // Maps the vertex number to string
vector<int> rcnt;       // Maps the vertex number to its r-count
map<string, int> mp;    // Maps the string to its vertex number
int comp[N];            // Maps the vertex number to its component
vector<int> minR;       // Maps the component to its representative vertex number
vector<int> minR2;      // Maps the component to the vertex number yield optimum answer

// Function to convert strings to lowercase
void lowercase(string &s)
{
    for(char &i:s)
        i = (char)tolower(i);
}

// Function to count number of r
int countR(string &s)
{
    int ret = 0;

    for(char i:s)
        ret += (i == 'r');

    return ret;
}

void dfs1(int v)
{
    vis1[v] = true;

    for(int x:graph[v])
        if(!vis1[x])
            dfs1(x);

    st.push(v);
}

// This dfs returns the SCC representative for the current SCC
int dfs2(int v, int curComp)
{
    vis2[v] = true;
    comp[v] = curComp;
    int rep = v;

    for(int x:graphRev[v])
    {
        if(!vis2[x])
        {
            int to = dfs2(x, curComp);

            // Comparing which choice is better 
            if(rcnt[rep] > rcnt[to] || (rcnt[rep] == rcnt[to] && dict[rep].size() > dict[to].size()))
                rep = to;
        }
    }

    return rep;
}

// This dfs is for the condensed graph, returns the optimal string replacement for the current SCC
int dfs3(int v)
{
    vis3[v] = true;
    int rep = minR[v];

    for(int x:graph2[v])
    {
        int to;
        if(!vis3[x]) to = dfs3(x);
        else to = minR2[x];

        if(rcnt[rep] > rcnt[to] || (rcnt[rep] == rcnt[to] && dict[rep].size() > dict[to].size()))
            rep = to;
    }

    minR2[v] = rep; // Storing the id of optimal string for current SCC
    return rep;
}

int main()
{
    int n, m;
    cin >> m;

    string essay[m];
    for(int i=0; i<m; i++)
    {
        cin >> essay[i];
        lowercase(essay[i]);
    } 

    cin >> n;
    vector<pair<int,int>> edges;

    for(int i=0; i<n; i++)
    {
        string x, y;
        cin >> x >> y;

        lowercase(x);
        lowercase(y);

        if(mp.find(x) == mp.end())      // New string encountered
        {
            mp[x] = dict.size();        // Map string to the next available number
            dict.push_back(x);          // Push it to the string vector
            rcnt.push_back(countR(x));  // Push its r-count to the rcnt vector
        } 

        if(mp.find(y) == mp.end())
        {
            mp[y] = dict.size();
            dict.push_back(y);
            rcnt.push_back(countR(y));
        }

        edges.push_back({mp[x], mp[y]});
        graph[mp[x]].push_back(mp[y]);
        graphRev[mp[y]].push_back(mp[x]);
    }

    for(int i=0; i<dict.size(); i++)
        if(!vis1[i])
            dfs1(i);
    
    int curComp = 0;    // Stores the current SCC, stores the total number of SCC in the end

    // Kosaraju's algorithm to find all SCC (strongly connected components) of a directed graph
    while(!st.empty())
    {
        int v = st.top();
        st.pop();

        if(!vis2[v])
        {
            minR.push_back(dfs2(v, curComp));   // dfs2 returns the component representative, push it to minR
            curComp++;
        }
    }

    for(auto i:edges)
        if(comp[i.first] != comp[i.second])     // There is a edge between two different SCC
            graph2[comp[i.first]].push_back(comp[i.second]);   

    minR2.resize(curComp);

    for(int i=0; i<curComp; i++)
        if(!vis3[i])
            dfs3(i);

    long long ansR = 0, ansLen = 0;

    for(string i:essay)
    {
        string red;
        
        if(mp.find(i) == mp.end()) // There is no replacement possible
        {
            ansR += countR(i);
            ansLen += i.length();
        } 
        else // There is an optimal replacement stored in minR2
        {
            ansR += rcnt[minR2[comp[mp[i]]]];
            ansLen += dict[minR2[comp[mp[i]]]].length();
        } 
    }

    cout << ansR << ' ' << ansLen << endl;
}