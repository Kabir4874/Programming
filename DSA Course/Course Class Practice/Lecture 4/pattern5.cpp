#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            count++;
            cout << count;
        }
        cout << endl;
    }
    return 0;
}