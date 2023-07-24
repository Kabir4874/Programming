#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int len1 = s1.size();
        int len2 = s2.size();
        int k;
        if (len1 >= len2)
        {
            k = len1;
        }
        else
        {
            k = len2;
        }
        for (int i = 0; i < k; i++)
        {
            if (i < len1)
            {
                cout << s1[i];
            }
            if (i < len2)
            {
                cout << s2[i];
            }
        }
        cout << endl;
    }
    return 0;
}