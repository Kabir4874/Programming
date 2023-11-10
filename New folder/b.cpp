#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    char ch;
    cin >> ch;
    switch (ch)
    {
    case 'A':
        cout << "T" << endl;
        break;
    case 'C':
        cout << "G" << endl;
        break;
    case 'G':
        cout << "C" << endl;
        break;
    case 'T':
        cout << "A" << endl;
        break;
    default:
        break;
    }
    return 0;
}