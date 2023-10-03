#include <iostream>
#include <vector>

using namespace std;

int find_max_length_LNIS(vector<int> &sequence)
{
    int n = sequence.size();
    vector<int> dp(n, 1);

    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (sequence[i] <= sequence[j] && dp[i] <= dp[j])
            {
                dp[i] = dp[j];
            }
        }
    }

    int max_length = 0;
    for (int i = 0; i < n; ++i)
    {
        max_length = max(max_length, dp[i]);
    }

    return max_length;
}

int main()
{
    vector<int> sequence = {7, 3, 1, 8, 6, 3, 4, 9, 7};
    int max_length = find_max_length_LNIS(sequence);
    cout << "Maximum length of longest non-increasing sequence: " << max_length << endl;

    return 0;
}
