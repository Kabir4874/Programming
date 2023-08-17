#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool Search(int arr[], int s, int e, int key)
{
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return true;
    }
    else if (arr[mid] < key)
    {
        return Search(arr, mid + 1, e, key);
    }
    else
    {
        return Search(arr, s, mid - 1, key);
    }
}
int main()
{ 
    int arr[6] = {2, 4, 6, 10, 14, 16};
    int size = 6;
    int key = 14;
    bool ans = Search(arr, 0, 5, key);
    if (ans)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}