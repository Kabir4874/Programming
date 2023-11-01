#include <iostream>
#include <vector>
using namespace std;

string longestCommonSubsequence(string a, string b) {
    int m = a.length();
    int n = b.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Build the DP table and track the LCS
    for (int i = m - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            if (a[i] == b[j]) {
                dp[i][j] = 1 + dp[i + 1][j + 1];
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }

    int len = dp[0][0];
    int i = 0, j = 0;
    string lcs = "";
    
    // Reconstruct the LCS string
    while (i < m && j < n) {
        if (a[i] == b[j]) {
            lcs += a[i];
            i++;
            j++;
        } else if (dp[i + 1][j] >= dp[i][j + 1]) {
            i++;
        } else {
            j++;
        }
    }

    // Print the LCS string
    cout << "Longest Common Subsequence: " << lcs << endl;

    return lcs;
}

int main() {
    string a, b;
    cin >> a >> b;
    string lcs = longestCommonSubsequence(a, b);
    cout << "Length of LCS: " << lcs.length() << endl;
    return 0;
}
