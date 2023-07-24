#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, l = 0;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < t; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            l = i + 1;
            break;
        }
    }
    if (l > 0)
    {
        cout << l + 1 << endl;
    }
    else
    {
        cout << l << endl;
    }
    return 0;
}