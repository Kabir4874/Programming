#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int longestCommonSubsequence(string a, string b)
{
    vector<vector<int>> dp(a.length() + 1, vector<int>(b.length() + 1, 0));
    for (int i = a.length() - 1; i >= 0; i--)
    {
        for (int j = b.length() - 1; j >= 0; j--)
        {
            int ans = 0;
            if (a[i] == b[j])
            {
                ans = 1 + dp[i + 1][j + 1];
            }
            else
            {
                ans = max(dp[i + 1][j], dp[i][j + 1]);
            }
            dp[i][j] = ans;
        }
    }
    return dp[0][0];
}

int main()
{
    string a, b;
    cout << "Enter the first string: ";
    cin >> a;
    cout << "Enter the second string: ";
    cin >> b;
    int result = longestCommonSubsequence(a, b);
    cout << "Length of the Longest Common Subsequence: " << result << endl;
    return 0;
}
