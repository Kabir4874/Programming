#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, n, i, j, k, sum = 0;
    string str;
    cin >> a;
    while (a--)
    {
        cin >> str;
        for (i = 0; i < str.size(); i++)
        {
            switch (str[i])
            {
            case '0':
                sum += 6;
                break;
            case '1':
                sum += 2;
                break;
            case '2':
                sum += 5;
                break;
            case '3':
                sum += 5;
                break;
            case '4':
                sum += 4;
                break;
            case '5':
                sum += 5;
                break;
            case '6':
                sum += 6;
                break;
            case '7':
                sum += 3;
                break;
            case '8':
                sum += 7;
                break;
            case '9':
                sum += 6;
                break;
            }
        }
        cout << sum << " leds" << endl;
        sum = 0;
    }
    return 0;
}