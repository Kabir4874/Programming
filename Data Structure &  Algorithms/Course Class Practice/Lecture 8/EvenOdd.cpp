#include <bits/stdc++.h>
using namespace std;
void check(int num)
{
    if (num % 2 == 0)
    {
        cout << "Number is Even" << endl;
    }
    else
    {
        cout << "Number is Odd" << endl;
    }
}
int main()
{
    int num;
    cin >> num;
    check(num);
    return 0;
}