#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int n = s.size();
    if (n <= 140)
    {
        cout << "TWEET" << endl;
    }
    else
    {
        cout << "MUTE" << endl;
    }
    return 0;
}