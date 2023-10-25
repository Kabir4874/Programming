#include <bits/stdc++.h>
using namespace std;

vector<int> shortestPath(vector<vector<int>> adj, int n, int s, int t)
{
    unordered_map<int, bool> visited;
    unordered_map<int, int> parent;
    queue<int> q;
    q.push(s);
    parent[s] = -1;
    visited[s] = true;

    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        for (int i = 1; i <= n; i++)
        {
            if (adj[front][i] && !visited[i])
            {
                visited[i] = true;
                parent[i] = front;
                q.push(i);
            }
        }
    }

    vector<int> path;
    int current = t;
    while (current != -1)
    {
        path.push_back(current);
        current = parent[current];
    }

    reverse(path.begin(), path.end());
    return path;
}

int main()
{
    int T;
    cin >> T;

    for (int caseNo = 1; caseNo <= T; caseNo++)
    {
        int N, C, X;
        cin >> N >> C >> X;
        vector<vector<int>> adjacency(N + 1, vector<int>(N + 1));

        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                cin >> adjacency[i][j];
            }
        }

        vector<int> result = shortestPath(adjacency, N, C, X);

        cout << "Case " << caseNo << ":" << endl;
        cout << result.size() - 2 << endl;

        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i];
            if (i < result.size() - 1)
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
