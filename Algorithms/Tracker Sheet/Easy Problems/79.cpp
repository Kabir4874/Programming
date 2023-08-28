#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    ll arr1[n] = {-1};
    ll arr2[n] = {-1};
    ll arr3[n] = {-1};

    for (ll i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> arr2[i];
    }
    for (ll i = 0; i < n - 2; i++)
    {
        cin >> arr3[i];
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + (n - 1));
    sort(arr3, arr3 + (n - 2));
    int i = 0;
    while (i < n)
    {
        if (arr1[i] != arr2[i])
        {
            cout << arr1[i] << endl;
            break;
        }
        i++;
    }
    i = 0;
    while (i < n)
    {
        if (arr2[i] != arr3[i])
        {
            cout << arr2[i] << endl;
            break;
        }
        i++;
    }

    return 0;
}