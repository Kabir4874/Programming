#include <bits/stdc++.h>
using namespace std;
#define ll long long int
template <typename T>
class graph
{
public:
    unordered_map<T, list<T>> adj;
    void addEdge(T u, T v, bool direction)
    {
        adj[u].push_back(v);
        if (direction == false)
        {
            adj[v].push_back(u);
        }
    }
    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int n;
    cout << "Enter the number of Nodes: ";
    cin >> n;
    int m;
    cout << "Enter the number of Edges: ";
    cin >> m;
    graph<int> g;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, false);
    }
    g.printAdjList();
    return 0;
}