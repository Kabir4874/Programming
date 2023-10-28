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
    int k = 1;
    while (1)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
        {
            break;
        }
        vector<int> bachelor(a);
        vector<int> spinster(b);
        for (int i = 0; i < a; i++)
        {
            cin >> bachelor[i];
        }
        for (int i = 0; i < b; i++)
        {
            cin >> spinster[i];
        }
        sort(bachelor.begin(), bachelor.end());
        int x = a - b;
        if (x > 0)
        {
            cout << "Case " << k++ << ": " << x << " " << bachelor[0] << endl;
        }
        else
        {
            cout << "Case " << k++ << ": " << 0 << endl;
        }
    }
    return 0;
}