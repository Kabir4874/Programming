#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void dfs(int node, int parent, vector<int> &disc, vector<int> &low, unordered_map<int, bool> &vis, unordered_map<int, list<int>> &adj, vector<int> &ap, int &timer)
{
    vis[node] = true;
    disc[node] = low[node] = timer++;
    int child = 0;
    for (auto nbr : adj[node])
    {
        if (nbr == parent)
        {
            continue;
        }
        if (!vis[nbr])
        {
            dfs(nbr, node, disc, low, vis, adj, ap, timer);
            low[node] = min(low[node], low[nbr]);
            if (low[nbr] >= disc[node] && parent != -1)
            {
                ap[node] = true;
            }
            child++;
        }
        else
        {
            low[node] = min(low[node], disc[nbr]);
        }
    }
    if (parent == -1 && child > 1)
    {
        ap[node] = 1;
    }
}
int main()
{
    fastIO();
    int n = 5, e = 5;
    vector<pair<int, int>> edges;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        edges.push_back(make_pair(u, v));
    }
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int timer = 0;
    vector<int> disc(n, -1);
    vector<int> low(n, -1);
    unordered_map<int, bool> vis;
    vector<int> ap(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i, -1, disc, low, vis, adj, ap, timer);
        }
    }
    cout << "Articulation Points: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (ap[i] != 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}