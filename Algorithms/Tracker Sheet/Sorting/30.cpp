#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll cnt = 0;
void Merge(vector<ll> &arr, ll low, ll mid, ll high)
{
    ll n1 = mid - low + 1;
    ll n2 = high - mid;
    vector<ll> left(n1);
    vector<ll> right(n2);
    for (ll i = 0; i < n1; i++)
    {
        left[i] = arr[low + i];
    }
    for (ll i = 0; i < n2; i++)
    {
        right[i] = arr[mid + 1 + i];
    }
    ll i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
            cnt += n1 - i;
        }
    }
    while (i < n1)
    {
        arr[k++] = left[i++];
    }
    while (j < n2)
    {
        arr[k++] = right[j++];
    }
}
void mergeSort(vector<ll> &arr, ll low, ll high)
{
    if (low < high)
    {
        ll mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}

int main()
{
    while (1)
    {
        ll n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        vector<ll> arr(n, 0);
        cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        mergeSort(arr, 0, n - 1);
        cout << cnt << endl;
    }
    return 0;
}
