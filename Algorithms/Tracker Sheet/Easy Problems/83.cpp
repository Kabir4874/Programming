#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    while (1)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
        {
            break;
        }
        int arr1[a], arr2[b];
        for (int i = 0; i < a; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < b; i++)
        {
            cin >> arr2[i];
        }
        sort(arr1, arr1 + a);
        sort(arr2, arr2 + b);
        if (a > b)
        {
            cout << "Loowater is doomed!" << endl;
        }
        else
        {
            int ans = 0;
            int i = 0, j = 0;
            while (i < a && j < b)
            {
                if (arr2[j] >= arr1[i])
                {
                    ans += arr2[j];
                    i++;
                    j++;
                }
                else
                {
                    j++;
                }
            }
            if (i == a)
            {

                cout << ans << endl;
            }
            else
            {
                cout << "Loowater is doomed!" << endl;
            }
        }
    }
    return 0;
}