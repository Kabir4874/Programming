#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        int c = 0;
        while (true)
        {
            bool f = true;
            int x;
            for (int i = 1; i <= n; i++)
            {
                cin >> x;
                if (x != i)
                {
                    f = false;
                }
            }
            c++;
            if (f)
            {
                break;
            }
        }
        cout << c << endl;
    }
    return 0;
}