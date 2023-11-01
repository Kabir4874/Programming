#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph;
vector<int> color;

bool isPossible(int u, int c)
{
    color[u] = c;
    for (int v : graph[u])
    {
        if (color[v] == c)
        {
            return false;
        }
        else if (color[v] == 0)
        {
            if (!isPossible(v, 3 - c))
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    graph.resize(n);
    color.resize(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int aij;
            cin >> aij;
            if (aij)
            {
                graph[i].push_back(j);
            }
        }
    }

    bool possible = true;
    int redCount = 0;
    int greenCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (color[i] == 0)
        {
            if (!isPossible(i, 1))
            {
                possible = false;
                break;
            }
        }
        if (color[i] == 1)
        {
            redCount++;
        }
        else
        {
            greenCount++;
        }
    }

    if (possible)
    {
        cout << "Possible! Possible!" << endl;
        cout << greenCount << " " << redCount << endl;
    }
    else
    {
        cout << "Pardon Dear Lord! It is not Possible." << endl;
    }

    return 0;
}
