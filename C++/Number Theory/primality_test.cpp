#include <bits/stdc++.h>
using namespace std;
bool check_prime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (check_prime(n))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}