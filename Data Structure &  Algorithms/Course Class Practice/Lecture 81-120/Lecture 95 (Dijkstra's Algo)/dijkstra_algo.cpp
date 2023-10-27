#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> graph(n);

    for (int i = 0; i < m; ++i)
    {
        int from, to, weight;
        cin >> from >> to >> weight;
        graph[from].push_back(make_pair(to, weight));
        graph[to].push_back(make_pair(from, weight));
    }

    int source;
    cin >> source;

    vector<int> distance(n, INF);
    distance[source] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push(make_pair(0, source));

    while (!pq.empty())
    {
        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (dist > distance[node])
            continue;

        for (const pair<int, int> &edge : graph[node])
        {
            int neighbor = edge.first;
            int newDist = distance[node] + edge.second;

            if (newDist < distance[neighbor])
            {
                distance[neighbor] = newDist;
                pq.push(make_pair(newDist, neighbor));
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << "Shortest distance from node " << source << " to node " << i << ": " << distance[i] << endl;
    }

    return 0;
}
