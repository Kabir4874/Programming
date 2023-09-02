#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }
    sort(arr2, arr2 + n, greater<int>());
    int ans = 1;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        ans = ans + (arr2[i] * count + 1);
        count++;
    }
    cout << ans << endl;
    int temp[n], k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr2[i] == arr1[j])
            {
                temp[k] = j + 1;
                k++;
                arr1[j] = -1;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;

    return 0;
}