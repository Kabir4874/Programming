#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int printCount(int n)
{
    if (n == 0)
    {
        return 1;
    }
    printCount(n-1);
    cout << n << endl;
}
int main()
{
    int n;
    cin >> n;
    printCount(n);
    return 0;
}