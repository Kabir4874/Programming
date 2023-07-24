#include <bits/stdc++.h>
using namespace std;
int main()
{

    int num, rev = 0, rem;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
       
        cin >> num;
        while (num != 0)
        {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }
        cout << rev << endl;
        rev=0;
    }
    return 0;
}