#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n;
    while (1)
    {
        cin >> n;
        if (n == -1)
        {
            break;
        }
        if (n > 0)
        {
            cout << n - 1 << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}