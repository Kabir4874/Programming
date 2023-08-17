#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> m;

    m[1] = "Kabir";
    m[2] = "Ahmed";
    m[3] = "Ridoy";

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    
    return 0;
}