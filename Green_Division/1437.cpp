#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        char ch[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ch[i];
        }
        int k = 1;
        for (int i = 0; i < n; i++)
        {
            if (ch[i] == 'D')
            {
                k++;
                if (k > 4)
                {
                    k = 1;
                }
            }
            if (ch[i] == 'E')
            {
                k--;
                if (k == 0)
                {
                    k = 4;
                }
            }
        }
        switch (k)
        {
        case 1:
            cout << "N" << endl;
            break;
        case 2:
            cout << "L" << endl;
            break;
        case 3:
            cout << "S" << endl;
            break;
        case 4:
            cout << "O" << endl;
            break;
        }
    }
    return 0;
}