#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    int a, b;
    while (getline(cin, s1) && getline(cin, s2))
    {
        a = s1.size();
        b = s2.size();
        cout << "$";
        for (int i = 0; i < s1.size(); i++)
        {
            if ((a - i) % 3 == 0 && i > 0)
            {
                cout << ",";
            }
            cout << s1[i];
        }
        cout << ".";
        if (b < 2)
        {
            cout << "0";
        }
        for (int i = 0; i < s2.size(); i++)
        {
            cout << s2[i];
        }
        cout << endl;
    }
    return 0;
}