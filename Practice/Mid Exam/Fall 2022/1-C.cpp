#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool binSearch(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == k)
        {
            return true;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return false;
}
int main()
{
    int n = 10;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k;
    cin >> k;
    bool ans = binSearch(arr, n, k);
    if (ans)
    {
        cout << "Selected" << endl;
    }
    else
    {
        cout << "Not Selected" << endl;
    }
    return 0;
}