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
                    cout << "</i>";
                }
                else
                {
                    cout << "<i>";
                }
            }
            else if (s[i] == '*')
            {
                b++;
                if (b % 2 == 0)
                {
                    cout << "</b>";
                }
                else
                {
                    cout << "<b>";
                }
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}