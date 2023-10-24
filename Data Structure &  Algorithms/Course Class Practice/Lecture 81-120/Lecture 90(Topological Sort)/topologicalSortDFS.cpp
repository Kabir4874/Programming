#include <bits/stdc++.h>
using namespace std;

void topoSort(int node, vector<bool> &visited, stack<int> &s, unordered_map<int, list<int>> &adj)
{
    visited[node] = true;
    for (auto i : adj[node])
    {
        if (!visited[i])
        {
            topoSort(i, visited, s, adj);
        }
    }
    s.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }

    vector<bool> visited(v, false);
    stack<int> s;
    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            topoSort(i, visited, s, adj);
        }
    }
    vector<int> ans;
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int v, e;
        cin >> v >> e;
        vector<vector<int>> edges(e);
        for (int i = 0; i < e; i++)
        {
            int u, v;
            cin >> u >> v;
            edges[i] = {u, v};
        }

        vector<int> result = topologicalSort(edges, v, e);
        for (int i : result)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
