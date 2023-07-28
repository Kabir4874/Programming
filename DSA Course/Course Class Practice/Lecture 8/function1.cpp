#include <bits/stdc++.h>
using namespace std;
int power(int a, int b)
{
    return pow(a, b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = power(a, b);
    cout << ans << endl;
    return 0;
}