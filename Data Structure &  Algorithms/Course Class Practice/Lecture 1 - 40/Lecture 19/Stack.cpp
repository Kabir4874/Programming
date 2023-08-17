#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> s;

    s.push("Kabir");
    s.push("Ahmed");
    s.push("Ridoy");

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
    return 0;
}