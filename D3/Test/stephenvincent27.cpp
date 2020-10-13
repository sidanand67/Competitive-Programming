#include <algorithm>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>
using namespace std;

vector<vector<int>> graph(26), graphRev(26);    // graph stores the original graph, graphRev stores its complement
stack<int> st;                                  // stack used for the first dfs, check out Kosaraju's algorithm
bool vis1[26], vis2[26];                        // visited arrays for the two dfs
vector<vector<int>> sets(26);                   // stores the component id for each vertex

// Initializes all global containers
void init()
{
    graph.clear();
    graph.resize(26);
    graphRev.clear();
    graphRev.resize(26);
    memset(vis1, false, sizeof(vis1));
    memset(vis2, false, sizeof(vis2));
    sets.clear();
    sets.resize(26);
}

void dfs1(int v)
{
    vis1[v] = true;

    for(int x:graph[v])
        if(!vis1[x])
            dfs1(x);
    
    st.push(v);
}

void dfs2(int v, int curComp)
{
    vis2[v] = true;
    sets[curComp].push_back(v); // Stores the vertex in set 'curComp'

    for(int x:graphRev[v])
        if(!vis2[x])
            dfs2(x, curComp);
}

// Comparator to compare two sets, required for sorting the output.
// This sorting is done right after sorting each set individually.
bool compareSets(vector<int> const& v1, vector<int> const& v2)
{
    if(v1.empty() && v2.empty()) return false; // If both are empty, v2 arbitrarily comes first.
    else return v2.empty() || (!v1.empty() && v1[0] < v2[0]);   
    // Else if v2 is empty, or v1 is non empty and its leading character is smaller, then v1 comes first.
}

int main()
{
    int t = 0;

    while(true)
    {
        int n;
        cin >> n;

        if(n == 0) break;

        if(t != 0) cout << endl;
        t++;

        init();

        bool hasOccurred[26] = {false}; // Keeps track of whether an activity is present in the test or not

        for(int i=0; i<n; i++)
        {
            char options[5], answer;

            for(int j=0; j<5; j++)
            {
                cin >> options[j];
                hasOccurred[options[j] - 'A'] = true;
            } 

            cin >> answer;

            for(int j=0; j<5; j++)
            {
                // This condition is to avoid self loops
                if(options[j] != answer)
                {
                    // answer -> option[i] : answer is preferred over option[i]
                    graph[answer - 'A'].push_back(options[j] - 'A');
                    graphRev[options[j] - 'A'].push_back(answer - 'A');
                }
            }
        }

        for(int i=0; i<26; i++)
            if(!vis1[i] && hasOccurred[i])
                dfs1(i);

        int curComp = 0; // Stores the current SCC id, contains the total number of SCC in the end

        // Kosaraju's algorithm to find all SCC (strongly connected components) of a directed graph
        while(!st.empty())
        {
            int v = st.top();
            st.pop();

            if(!vis2[v])
            {
                dfs2(v, curComp);
                curComp++;
            }
        }

        // Sorting each set individually
        for(int i=0; i<curComp; i++) sort(sets[i].begin(), sets[i].end());

        // Sorting all sets, based on the comparator we created earlier
        sort(sets.begin(), sets.end(), compareSets);

        for(int i=0; i<curComp; i++) 
        {
            for(int j=0; j<sets[i].size(); j++)
            {
                cout << (char)(sets[i][j] + 'A');
                if(j != sets[i].size() - 1) cout << ' ';
            }

            cout << endl;
        }
    }
}