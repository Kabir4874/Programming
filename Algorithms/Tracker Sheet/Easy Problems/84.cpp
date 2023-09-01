#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count1 = 0, count2 = 0;
    int temp1 = 0, temp2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count1++;
            temp1 = i;
        }
        else
        {
            count2++;
            temp2 = i;
        }
    }
    if (count1 == 1)
    {
        cout << temp1 + 1 << endl;
    }
    else if (count2 == 1)
    {
        cout << temp2 + 1 << endl;
    }
    return 0;
}