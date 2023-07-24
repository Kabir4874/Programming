#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
        int i = 1;
    while (t--)
    {
        int k, n = 0;
        string s;
        cin >> k;
        int x = 0;
    cout<<"Case "<<i<<":"<<endl;
        while (k--)
        {
            cin >> s;
            if (s == "donate")
            {
                cin >> n;
                x += n;
                
            }
            else if(s=="report")
            {
                cout << x << endl;
            }
        }
        i++;
    }
    return 0;
}