#include <bits/stdc++.h>
using namespace std;
int firstOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[5] = {1, 2, 3, 3, 5};
    int index = firstOcc(arr, 5, 3);
    cout << "First Occurrence: " << index << endl;
    int index2 = lastOcc(arr, 5, 3);
    cout << "Last Occurrence: " << index2 << endl;
    return 0;
}