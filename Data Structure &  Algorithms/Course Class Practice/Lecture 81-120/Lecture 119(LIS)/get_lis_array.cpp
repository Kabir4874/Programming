#include <bits/stdc++.h>
using namespace std;

void findLongestIncreasingSubsequence(const vector<int> &arr, vector<int> &longestSubsequence)
{
    int n = arr.size();
    vector<int> lis(n, 1);
    vector<int> prevIndex(n, -1);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
            {
                lis[i] = lis[j] + 1;
                prevIndex[i] = j;
            }
        }
    }

    int maxLISLength = *max_element(lis.begin(), lis.end());

    for (int i = n - 1; i >= 0; i--)
    {
        if (lis[i] == maxLISLength)
        {
            int idx = i;
            while (idx != -1)
            {
                longestSubsequence.push_back(arr[idx]);
                idx = prevIndex[idx];
            }
            reverse(longestSubsequence.begin(), longestSubsequence.end());
            break;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> longestSubsequence;

    findLongestIncreasingSubsequence(arr, longestSubsequence);

    cout << "Maximum length of the longest increasing subsequence: " << longestSubsequence.size() << endl;
    cout << "Longest increasing subsequence: ";
    for (int i = 0; i < longestSubsequence.size(); i++)
    {
        cout << longestSubsequence[i] << " ";
    }
    cout << endl;

    return 0;
}
