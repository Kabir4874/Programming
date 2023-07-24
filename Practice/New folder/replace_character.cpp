#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000];
    string s;
    int a = 0, b = 0;
    while (cin.getline(ch, 1000))
    {
        s = ch;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '_')
            {
                a++;
                if (a % 2 == 0)
                {
                    s.replace(i, 1, "</i>");
                }
                else
                {
                    s.replace(i, 1, "<i>");
                }
            }
            if (s[i] == '*')
            {
                b++;
                if (b % 2 == 0)
                {
                    s.replace(i, 1, "</b>");
                }
                else
                {
                    s.replace(i, 1, "<b>");
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}