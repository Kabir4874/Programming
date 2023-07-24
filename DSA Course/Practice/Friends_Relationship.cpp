#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n * 2; j++)
            {
              if((j>=i+1) && (j<=n*2-i))
              {
                cout<<"#";
              }
              else
              {
                cout<<"*";
              }
            }
            cout << endl;
        }
    }
    return 0;
}