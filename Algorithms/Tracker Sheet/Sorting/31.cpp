#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s.size() - 1; j += 2)
        {
            if (s[j] > s[j + 2])
            {
                swap(s[i], s[j]);
            }
        }
    }
    cout << s << endl;

    return 0;
}