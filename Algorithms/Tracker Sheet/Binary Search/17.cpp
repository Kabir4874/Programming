#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int t;
    cin >> t;
    while (t--)
    {
        string q;
        cin >> q;
        int index = 0;
        int start = -1, end = -1;
        int sLen = s.length();
        int qLen = q.length();
        for (int i = 0; i < qLen; i++)
        {
            char ch = q[i];
            while (index < sLen && s[index] != ch)
            {
                index++;
            }
            if (index == sLen)
            {
                break;
            }
            if (i == 0)
            {
                start = index;
            }
            if (i == qLen - 1)
            {
                end = index;
            }
            index++;
        }
        if (start != -1 && end != -1)
        {
            cout << "Matched " << start << " " << end << endl;
        }
        else
        {
            cout << "Not matched" << endl;
        }
    }
    return 0;
}