#include <bits/stdc++.h> 
using namespace std;
#define ll long long int
void update2(int &n)
{
    n++;
}
void update(int n)
{
    n++;
}
int &func(int a)
{
    int num = a;
    int &ans = num;
    return ans;
}
int main()
{
    // int i = 5;
    // int &j = i;
    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << i << endl;
    // cout << j << endl;

    int n = 5;
    cout << "Before: " << n << endl;
    // update(n);
    update2(n);
    cout << "After: " << n << endl;

    func(n);

    return 0;
}