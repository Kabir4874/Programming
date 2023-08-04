#include <bits/stdc++.h>
using namespace std;
int solve(int array[], int a, int num)
{
    int s = 0, e = a;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (array[mid] > num)
        {
            e = mid - 1;
        }
        else if (array[mid] < num)
        {
            s = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return s;
}
int main()
{
    int a, b;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    cin >> b;
    int arr2[b];
    for (int i = 0; i < b; i++)
    {
        cin >> arr2[i];
    }
    int temp[a + 1];
    int k = 0;
    temp[0] = 0;
    for (int i = 0; i < a; i++)
    {
        temp[i + 1] = (k + arr[i]);
        k += arr[i];
    }
    for (int i = 0; i < b; i++)
    {
        int ans = solve(temp, a, arr2[i]);
        cout << ans << endl;
    }
    return 0;
}