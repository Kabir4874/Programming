#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int Sorting(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                count++;
            }
        }
    }
    return count;
}
int main()
{
    while (1)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = Sorting(arr, n);
        if (ans % 2 == 0)
        {
            cout << "Carlos" << endl;
        }
        else
        {
            cout << "Marcelo" << endl;
        }
    }

    return 0;
}