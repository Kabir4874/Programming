#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void func(int a, int b)
{
    a++;
    b++;
    cout << a << " " << b << endl;
}
int main()
{
    int a = 1, b = 2;
    int ans = 0;
    ans = a > b ? a : b;
    a = a + 3;
    b = b + 1;
    ans = a > b ? a : b;

    return 0;
}