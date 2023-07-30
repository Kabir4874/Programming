#include <bits/stdc++.h>
using namespace std;
int SqrtInt(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int k = mid * mid;
        if (k > n)
        {
            e = mid - 1;
        }
        else if (k < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (k == n)
        {
            return mid;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int temp)
{
    double factor = 1;
    double ans = temp;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int temp = SqrtInt(n);
    cout << morePrecision(n, 3, temp);
    return 0;
}