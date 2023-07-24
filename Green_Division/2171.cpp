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
        int a = 0;
        for (int i = 1; a + i <= n; i++)
        {
            a += i;
        }
        cout << a << " " << n - a << endl;
    }
    return 0;
}