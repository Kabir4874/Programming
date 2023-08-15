#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int Sorting(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = Sorting(arr, n);
        cout << "Optimal train swapping takes " << ans << " swaps." << endl;
    }

    return 0;
}