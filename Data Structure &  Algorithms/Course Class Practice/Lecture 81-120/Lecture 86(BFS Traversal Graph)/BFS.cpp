#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> &adjMatrix, vector<bool> &visited, vector<int> &ans, int vertex, int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();
        ans.push_back(frontNode);

        for (int i = 1; i <= vertex; i++)
        {
            if (adjMatrix[frontNode][i] == 1 && !visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

vector<int> BFS(vector<vector<int>> &adjMatrix, int vertex, int start)
{
    vector<int> ans;
    vector<bool> visited(vertex+1, false);

    bfs(adjMatrix, visited, ans, vertex, start);

    return ans;
}

int main()
{
    int vertex;
    cin >> vertex;

    vector<vector<int>> adjMatrix(vertex+1, vector<int>(vertex+1, 0));

    // Input the adjacency matrix
    for (int i = 1; i <= vertex; i++)
    {
        for (int j = 1; j <= vertex; j++)
        {
            cin >> adjMatrix[i][j];
        }
    }

    int start;
    cout << "Enter the starting point for BFS: ";
    cin >> start;

    vector<int> ans = BFS(adjMatrix, vertex, start);

    cout << "BFS traversal from " << start << ": ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
