#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s, s1;
    while (n--)
    {
        cin >> s >> s1;
        int k = s.size();
        int l = s1.size();
        int count = 0, i, j;
        if (k < l)
        {
            cout << "nao encaixa" << endl;
        }
        else
        {
            for (i = s1.size(), j = s.size(); i >= 0; i--, j--)
            {
                if (s1[i] == s[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (count == s1.size() + 1)
            {
                cout << "encaixa" << endl;
            }
            else
            {
                cout << "nao encaixa" << endl;
            }
        }
    }
    return 0;
}