#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int getSum(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    return arr[0] + getSum(arr + 1, size - 1);
}
int main()
{
    int arr[5] = {3, 2, 5, 1, 6};
    int size = 5;
    int sum = getSum(arr, size);
    cout << sum << endl;
    return 0;
}