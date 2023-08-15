#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void Merge(int arr[], int mid, int s, int e)
{
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int first[len1];
    int second[len2];
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }
    int index1 = 0;
    int index2 = 0;
    k = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }
}
void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    Merge(arr, mid, s, e);
}
void Print(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << arr[n - 1] << endl;
}
int main()
{
    while (1)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        mergeSort(arr, 0, n - 1);
        Print(arr, n);
    }
    return 0;
}