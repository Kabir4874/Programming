#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj, vector<int> &component)
{
    component.push_back(node);
    visited[node] = true;
    for (auto i : adj[node])
    {
        if (!visited[i])
        {
            dfs(i, visited, adj, component);
        }
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<int>> ans;
    unordered_map<int, bool> visited;
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            vector<int> component;
            dfs(i, visited, adj, component);
            ans.push_back(component);
        }
    }
    return ans;
}
int main()
{
    int V, E;
    cin >> V >> E;
    vector<vector<int>> edges;
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }
    vector<vector<int>> result = depthFirstSearch(V, E, edges);
    cout << result.size() << endl;
    for (const vector<int> &component : result)
    {
        for (int node : component) 
        {
            cout << node << " ";
        }
        cout << endl;
    }
    return 0;
}