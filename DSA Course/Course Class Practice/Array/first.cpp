#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "Printing the Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int num[15];
    for (int i = 0; i < 15; i++)
    {
        cin >> num[i];
    }
    printArray(num, 15);
    return 0;
}