#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int solveTab(vector<vector<int>> &mat, int &maxi)
{
    int row = mat.size();
    int col = mat[0].size();
    vector<vector<int>> dp(row + 1, vector<int>(col + 1, 0));
    for (int i = row - 1; i >= 0; i--)
    {
        for (int j = col - 1; j >= 0; j--)
        {
            int right = dp[i][j + 1];
            int diagonal = dp[i + 1][j + 1];
            int down = dp[i + 1][j];
            if (mat[i][j] == 1)
            {
                dp[i][j] = 1 + min(right, min(diagonal, down));
                maxi = max(maxi, dp[i][j]);
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    return dp[0][0];
}
int maxSquare(int n, int m, vector<vector<int>> mat)
{
    int maxi = 0;
    solveTab(mat, maxi);
    return maxi;
}
int main()
{
    int n, m;
    cin >> n >> m; // Input the dimensions of the matrix

    vector<vector<int>> mat(n, vector<int>(m, 0));

    // Input the matrix elements (0s and 1s)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    int result = maxSquare(n, m, mat);

    cout << "Maximum square of 1s in the binary matrix: " << result << endl;

    return 0;
}
