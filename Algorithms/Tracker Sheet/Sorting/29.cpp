#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void Sorting(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Sorting(arr, n);
    int ans = 0;
    for (int i = 0, j = 1; i < n / 2, j < n; i += 2, j += 2)
    {
        if (arr[i] == arr[j])
        {
            continue;
        }
        else
        {
            ans += arr[j] - arr[i];
        }
    }
    cout << ans << endl;

    return 0;
}