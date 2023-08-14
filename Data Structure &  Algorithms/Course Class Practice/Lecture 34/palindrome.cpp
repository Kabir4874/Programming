#include <bits/stdc++.h>
using namespace std;
#define ll long long int
string Reverse(string s, int l, int h)
{
    if (l > h)
    {
        return s;
    }
    swap(s[l], s[h]);
    l++;
    h--;
    return Reverse(s, l, h);
}
int main()
{
    string s;
    cin >> s;
    string k = s;
    int l = 0, h = s.length() - 1;
    string ans = Reverse(s, l, h);
    if (k == ans)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}