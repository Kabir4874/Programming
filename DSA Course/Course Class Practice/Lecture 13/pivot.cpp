#include <bits/stdc++.h>
using namespace std;
int findPivot(int arr[], int n)
{
    int s = 0;
    int e = accumulate(arr, arr + n, 0);
    for (int i = 0; i < n; i++)
    {
        s += arr[i];
        if (s == e)
        {
            return i;
        }
        e -= arr[i];
    }
    return -1;
}
int main()
{
    int arr[6] = {1, 7, 3, 6, 5, 6};
    int arr2[3] = {1, 2, 3};
    int arr3[3] = {2, 1, -1};
    int arr4[6] = {-1, -1, -1, -1, 0, 1};
    int arr5[6] = {-1, -1, -1, 0, 1, 1};
    int index = findPivot(arr5, 6);
    cout << index;
    return 0;
}