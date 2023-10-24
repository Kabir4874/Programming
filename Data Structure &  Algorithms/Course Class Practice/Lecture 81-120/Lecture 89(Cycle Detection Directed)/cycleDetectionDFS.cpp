#include <bits/stdc++.h>
using namespace std;
bool checkCycleDFS(int node, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsVisited, unordered_map<int, list<int>> &adj)
{
    visited[node] = true;
    dfsVisited[node] = true;
    for (auto i : adj[node])
    {
        if (!visited[i])
        {
            bool cycleDetected = checkCycleDFS(i, visited, dfsVisited, adj);
            if (cycleDetected)
            {
                return true;
            }
        }
        else if (dfsVisited[i])
        {
            return true;
        }
    }
    dfsVisited[node] = false;
    return false;
}
bool detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
{
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
    }
    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsVisited;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            bool cycleFound = checkCycleDFS(i, visited, dfsVisited, adj);
            if (cycleFound)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> edges;
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }
        bool result = detectCycleInDirectedGraph(n, edges);
        cout << (result ? "true" : "false") << endl;
    }
    return 0;
}