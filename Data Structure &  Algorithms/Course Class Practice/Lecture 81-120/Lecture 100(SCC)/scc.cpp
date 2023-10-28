#include <bits/stdc++.h>
using namespace std;

void dfs(int node, unordered_map<int, bool> &vis, stack<int> &st, unordered_map<int, list<int>> &adj)
{
    vis[node] = true;
    for (auto nbr : adj[node])
    {
        if (!vis[nbr])
        {
            dfs(nbr, vis, st, adj);
        }
    }
    st.push(node);
}

void revDfs(int node, unordered_map<int, bool> &vis, unordered_map<int, list<int>> &adj, vector<int> &component)
{
    vis[node] = true;
    component.push_back(node);
    for (auto nbr : adj[node])
    {
        if (!vis[nbr])
        {
            revDfs(nbr, vis, adj, component);
        }
    }
}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges, vector<vector<int>> &components)
{
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int w = edges[i][1];
        adj[u].push_back(w);
    }
    stack<int> st;
    unordered_map<int, bool> vis;
    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
        {
            dfs(i, vis, st, adj);
        }
    }
    unordered_map<int, list<int>> transpose;
    for (int i = 0; i < v; i++)
    {
        vis[i] = false;
        for (auto nbr : adj[i])
        {
            transpose[nbr].push_back(i);
        }
    }
    int cnt = 0;
    while (!st.empty())
    {
        int top = st.top();
        st.pop();
        if (!vis[top])
        {
            vector<int> component;
            revDfs(top, vis, transpose, component);
            components.push_back(component);
            cnt++;
        }
    }
    return cnt;
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
            int u, w;
            cin >> u >> w;
            edges[i] = {u, w};
        }
        vector<vector<int>> components;
        int result = stronglyConnectedComponents(v, edges, components);
        cout << "Number of strongly connected components: " << result << endl;
        for (const auto &component : components)
        {
            cout << "Strongly connected component:";
            for (int node : component)
            {
                cout << " " << node;
            }
            cout << endl;
        }
    }
    return 0;
}
