#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool ans = false;
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            ans = true;
            break;
        }
    }
    if (ans)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}