#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    while (scanf("%d%d%d", &a, &b, &c) != EOF)
    {
        if (a == b && b == c)
        {
            cout << "*" << endl;
        }
        else if (a == b)
        {
            cout << "C" << endl;
        }
        else if (a == c)
        {
            cout << "B" << endl;
        }
        else if (b == c)
        {
            cout << "A" << endl;
        }
    }
    return 0;
}