#include <iostream>
using namespace std;
#define ll long long int
int FindLis(int n, int num[])
{
    int lis[n];
    for (int i = 0; i < n; i++)
    {
        lis[i] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (num[i] < num[j])
            {
                int nLis = lis[j] + 1;
                if (nLis > lis[i])
                {
                    lis[i] = nLis;
                }
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans < lis[i])
        {
            ans = lis[i]; 
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int ans = FindLis(n, num);
    cout << ans << endl;

    return 0;
}