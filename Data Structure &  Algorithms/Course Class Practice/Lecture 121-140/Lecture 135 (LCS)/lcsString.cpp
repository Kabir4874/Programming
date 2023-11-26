#include <iostream>
#include <vector>
using namespace std;
string longestCommonSubsequence(const string &a, const string &b)
{
    int m = a.length();
    int n = b.length();
    vector<vector<int>> dp(2, vector<int>(n + 1, 0));
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (a[i] == b[j])
            {
                dp[i % 2][j] = 1 + dp[(i + 1) % 2][j + 1];
            }
            else
            {
                dp[i % 2][j] = max(dp[(i + 1) % 2][j], dp[i % 2][j + 1]);
            }
        }
    }
    int len = dp[0][0];
    string lcs;
    lcs.reserve(len);
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a[i] == b[j])
        {
            lcs.push_back(a[i]);
            i++;
            j++;
        }
        else if (dp[(i + 1) % 2][j] >= dp[i % 2][j + 1])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    // Print the LCS string
    cout << "Longest Common Subsequence: " << lcs << endl;
    return lcs;
}
int main()
{
    string a, b;
    cout << "Enter the first string: ";
    cin >> a;
    cout << "Enter the second string: ";
    cin >> b;
    string lcs = longestCommonSubsequence(a, b);
    cout << "Length of LCS: " << lcs.length() << endl;
    return 0;
}
