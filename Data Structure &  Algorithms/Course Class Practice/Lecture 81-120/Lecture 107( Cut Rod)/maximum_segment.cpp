#include <bits/stdc++.h>
#include <climits>
#include <iostream>
using namespace std;

int maximizeCuts(int n, int arr[], int length)
{
    int dp[n + 1];
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        dp[i] = INT_MIN;
        for (int j = 0; j < length; j++)
        {
            if (i >= arr[j] && dp[i - arr[j]] != INT_MIN)
            {
                dp[i] = max(dp[i], dp[i - arr[j]] + 1);
            }
        }
    }

    return (dp[n] != INT_MIN) ? dp[n] : 0;
}

int main()
{
    int l = 7;
    int arr[] = {5, 2, 2};
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    cout << maximizeCuts(l, arr, arrLength) << endl;
    return 0;
}
