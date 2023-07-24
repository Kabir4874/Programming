#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    int count = 1;
    if (t == 2 && arr[0] == arr[1])
    {
        count = 0;
    }
    else
    {
        for (int i = 2; i < t; i++)
        {
            if ((arr[i] >= arr[i - 1] && arr[i - 1] >= arr[i - 2]) || (arr[i] <= arr[i - 1] && arr[i - 1] <= arr[i - 2]))
            {
                count = 0;
                break;
            }
            else
            {
                count = 1;
            }
        }
    }
    if (count == 1)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}