#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int cnt = 0;
void Merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];
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
            cnt++;
        }
        else
        {
            arr[k++] = second[index2++];
            cnt = cnt + (mid - index1);
        }
    }
    while (index1 < len1)
    {
        arr[k++] = first[index1++];
        // cnt++;
    }
    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }
    delete[] first;
    delete[] second;
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
    Merge(arr, s, e);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        mergeSort(arr, 0, n - 1);
        cout << cnt << endl;
        cnt = 0;
        delete[] arr;
    }
    return 0;
}