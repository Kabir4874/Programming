#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n, d, r;
    while (1)
    {
        cin >> n >> d >> r;
        if (n == 0 && d == 0 && r == 0)
        {
            break;
        }
        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + n);
        int i = 0, j = n - 1;
        int ans = 0;
        while (i < n && j >= 0)
        {
            int temp = arr1[i] + arr2[j];
            if (temp > d)
            {
                ans += temp - d;
            }
            i++;
            j--;
        }
        cout << ans * r << endl;
    }
    return 0;
}