#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    int k = n * 2 - 1;
    for (int i = 1; i <= n * 2; i++)
    {

        for (int j = 1; j <= k; j++)
        {
            cout << "* ";
        }
        if (i % 2 == 0)
        {
            k -= 2;
        }
        cout << endl;
    }
}