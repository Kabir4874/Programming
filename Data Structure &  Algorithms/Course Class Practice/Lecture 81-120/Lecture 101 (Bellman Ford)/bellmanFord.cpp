#include <bits/stdc++.h>
using namespace std;

vector<int> bellmanFord(int n, int m, int src, int dest, vector<vector<int>> &edges)
{
    vector<int> dist(n + 1, INT_MAX);
    vector<int> parent(n + 1, -1);
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int u = edges[j][0];
            int v = edges[j][1];
            int w = edges[j][2];
            if (dist[u] != INT_MAX && dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                parent[v] = u;
            }
        }
    }

    bool negativeCycle = false;
    for (int j = 0; j < m; j++)
    {
        int u = edges[j][0];
        int v = edges[j][1];
        int w = edges[j][2];
        if (dist[u] != INT_MAX && dist[u] + w < dist[v])
        {
            negativeCycle = true;
            break;
        }
    }

    vector<int> path;
    if (negativeCycle)
    {
        return path;
    }
    else
    {
        int current = dest;
        while (current != -1)
        {
            path.insert(path.begin(), current);
            current = parent[current];
        }
        return path;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int src, dest;
    cin >> src >> dest;
    vector<vector<int>> edges(m);
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges[i] = {u, v, w};
    }

    vector<int> shortestPath = bellmanFord(n, m, src, dest, edges);
    if (shortestPath.empty())
    {
        cout << "No valid path due to negative-weight cycle." << endl;
    }
    else
    {
        cout << "Shortest path from " << src << " to " << dest << ": ";
        for (int node : shortestPath)
        {
            cout << node << " ";
        }
        cout << endl;

        int totalWeight = 0;
        for (int i = 0; i < shortestPath.size() - 1; i++)
        {
            int u = shortestPath[i];
            int v = shortestPath[i + 1];
            for (int j = 0; j < m; j++)
            {
                if (edges[j][0] == u && edges[j][1] == v)
                {
                    totalWeight += edges[j][2];
                    break;
                }
            }
        }

        cout << "Total minimum path weight: " << totalWeight << endl;
    }
    return 0;
}