#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q, q1;
    q.push(1);
    q.push(2);
    q.push(3);
    q1.push(4);
    q1.push(5);
    q1.push(6);
    cout << q.size() << endl;
    q.swap(q1);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}