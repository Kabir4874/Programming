#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    for (int i = 0; i < n - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}