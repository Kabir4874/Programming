#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    queue<int> q;
    q.push(11);
    cout << "Front of queue is: " << q.front() << endl;
    q.push(15);
    q.push(13);
    cout << "Size: " << q.size() << endl;
    q.pop();
    cout << "Size: " << q.size() << endl;
    return 0;
}  