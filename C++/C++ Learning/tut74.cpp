#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 5, 62, 632, 63, 46};
    sort(arr, arr + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}