#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int CheckFlip(int arr[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
    int n;
    while (cin >> n)
    {
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = CheckFlip(arr, n);
        cout << "Minimum exchange operations : " << ans << endl;
        delete[] arr;
    }
    return 0;
}