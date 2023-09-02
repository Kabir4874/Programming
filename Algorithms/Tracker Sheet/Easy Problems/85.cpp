#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
        bool a = false, b = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                a = true;
            }
            else
            {
                b = true;
            }
        }
        if (a && b)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}