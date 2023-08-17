#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void sayDigit(int n)
{
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    n = n / 10;
    sayDigit(n);
    cout << arr[digit] << endl;
}
int main()
{
    ll n;
    cin >> n;
    sayDigit(n);
    return 0;
}