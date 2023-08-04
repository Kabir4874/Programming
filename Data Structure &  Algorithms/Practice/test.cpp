#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, element, result;
    cin >> size;
    int arr[size][size];
    int row, col, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0, sum7 = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (col = 0; col < size / 2; col++)
    {
        sum1 += arr[0][col];
    }

    for (col = size - 1; col > size / 2; col--)
    {
        sum2 += arr[size - 1][col];
    }

    for (row = 0; row < size; row++)
    {
        sum3 += arr[row][(size / 2)];
    }

    for (col = 0; col < size; col++)
    {
        sum4 += arr[(size / 2)][col];
        sum7 = sum4 - arr[(size / 2)][(size / 2)];
    }

    for (row = 0; row < size / 2; row++)
    {
        sum5 += arr[row][(size - 1)];
    }

    for (row = size - 1; row > col / 2; row--)
    {
        sum6 += arr[row][0];
    }

    result = sum1 + sum2 + sum3 + sum5 + sum6 + sum7;
    cout << result << endl;

    return 0;
}