#include <bits/stdc++.h>
using namespace std;

int main() {
    int coins[5] = {2, 5, 7, 10, 20};
    int n = 14;
    int coin_limit[5];

    for (int i = 0; i < 5; i++) {
        cin >> coin_limit[i];
    }

    vector<vector<int>> dp(n + 1, vector<int>(5, 0));

    for (int i = 0; i < 5; i++) {
        for (int j = 1; j <= n; j++) {
            dp[j][i] = INT_MAX;
            if (i > 0) {
                dp[j][i] = dp[j][i - 1];
            }
            if (j >= coins[i] && coin_limit[i] > 0) {
                int numCoins = dp[j - coins[i]][i] + 1;
                if (numCoins < dp[j][i]) {
                    dp[j][i] = numCoins;
                    coin_limit[i]--;
                }
            }
        }
    }

    int result = dp[n][4];
    cout << result << endl;

    return 0;
}
