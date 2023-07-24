#include <bits/stdc++.h>
using namespace std;
bool Search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -23, 0, 5, 1, 44};

    int key;
    cout << "Enter The Key: ";
    cin >> key;
    bool res = Search(arr, 10, key);
    if (res)
    {
        cout << "Key is present";
    }
    else
    {
        cout << "Key is not present";
    }

    return 0;
}