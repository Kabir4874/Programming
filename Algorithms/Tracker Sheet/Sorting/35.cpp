#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    int temp;
    vector<int> odd, even;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp % 2 == 0)
        {
            even.push_back(temp);
        }
        else
        {
            odd.push_back(temp);
        }
    }
    ll sum = 0;
    int a = even.size();
    int b = odd.size();
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    int k = abs(a - b);
    if (k > 1)
    {
        if (a > b)
        {
            int x = (a - b) - 1;
            for (int i = 0; i < x; i++)
            {
                sum += even[i];
            }
        }
        else
        {
            int y = (b - a) - 1;
            for (int i = 0; i < y; i++)
            {
                sum += odd[i];
            }
        }
        cout << sum << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}