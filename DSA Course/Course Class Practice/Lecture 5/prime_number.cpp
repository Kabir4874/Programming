#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool isPrime = true;
    cin >> n;
    if (n <= 1)
    {
        isPrime = false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "Number Is Prime" << endl;
    }
    else
    {
        cout << "Number Is Not Prime" << endl;
    }
    return 0;
}