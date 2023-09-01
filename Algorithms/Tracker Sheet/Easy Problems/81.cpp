#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin >> s;
    char before = 'a';
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int x = abs(s[i] - before);
        int y = 26 - x;
        count += min(x, y);
        before = s[i];
    }
    cout << count << endl;
    return 0;
}