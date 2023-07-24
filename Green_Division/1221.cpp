#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int count = 0;
        if (n == 1 || n == 0)
        {
            cout << "Not Prime" << endl;
            continue;
        }
        if (n == 2)
        {
            cout << "Prime" << endl;
            continue;
        }
        for (int i = 2; i < sqrt(n) + 1; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
            if (count == 2)
            {
                break;
            }
        }
        if (count >= 1)
        {
            cout << "Not Prime" << endl;
        }
        else
        {
            cout << "Prime" << endl;
        }
    }
    return 0;
}