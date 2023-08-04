#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> p;
    p.push(5);
    p.push(6);
    p.push(2);
    p.push(6);
    p.push(1);

    int n = p.size();
    for (int i = 0; i < n; i++)
    {
        cout << p.top() << " ";
        p.pop();
    }

    // For get minimum first 
    priority_queue<int, vector<int>, greater<int>> mini;
    return 0;
}