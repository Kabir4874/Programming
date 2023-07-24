#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    while (cin >> n >> s)
    {
        long long int sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            sum += s[i] - 48;
        }
        if (sum % 3 == 0)
        {
            cout << sum << " sim" << endl;
        }
        else
        {
            cout << sum << " nao" << endl;
        }
    }
    return 0;
}