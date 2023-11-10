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
    int k = 1;
    while ((k * n) % 360 != 0)
    {
        k++;
    }
    cout << k << endl;
    return 0;
}