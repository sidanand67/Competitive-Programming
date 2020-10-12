#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

#define N 5010
using namespace std;

vector< vector<int> > graph, graphRev;  // graph stores the original graph, graphRev stores its complement
stack<int> st;                          // stack used for the first dfs, check out Kosaraju's algorithm
bool vis1[N], vis2[N];                  // visited arrays for the two dfs
int comp[N];                            // stores the component id for each vertex

// Initializes all global containers
void init(int n)
{
    graph.clear();
    graph.resize(n);
    graphRev.clear();
    graphRev.resize(n);
    memset(vis1, false, sizeof(vis1));
    memset(vis2, false, sizeof(vis2));
    memset(comp, -1, sizeof(comp));
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
    comp[v] = curComp; // Stores the component id for vertex v

    for(int x:graphRev[v])
        if(!vis2[x])
            dfs2(x, curComp);
}

int main()
{
    while(true)
    {
        int n, e;
        cin >> n;

        if(n == 0) break;

        init(n);

        cin >> e;
        vector< pair<int,int> > edges;

        for(int i=0; i<e; i++)
        {
            int x, y;
            cin >> x >> y, x--, y--;

            edges.push_back({x,y});
            graph[x].push_back(y);
            graphRev[y].push_back(x);
        }

        // Running dfs for all nodes
        for(int i=0; i<n; i++)
            if(!vis1[i])
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

        vector<bool> isSink(curComp, true); // Stores whether all vertices of a component are sinks or not

        for(int i=0; i<e; i++)
        {
            // An outgoing edge to another SCC disqualifies the whole SCC, because it violates the definition of a sink
            if(comp[edges[i].first] != comp[edges[i].second]) 
            {
                isSink[comp[edges[i].first]] = false;
            }
        }

        vector<int> ans;

        for(int i=0; i<n; i++)
        {
            // If the vertex's SCC is still valid, add the vertex to the bottom
            if(isSink[comp[i]])
            {
                ans.push_back(i+1);
            }
        }

        for(int v:ans) cout << v << ' ';
        cout << endl;
    }
}