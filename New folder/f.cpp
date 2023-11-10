#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int n;
    cin >> n;
    if (n >= 42)
    {
        cout << "AGC" << setw(3) << setfill('0') << n + 1 << endl;
    }
    else
    {
        cout << "AGC" << setw(3) << setfill('0') << n << endl;
    }
    return 0;
}