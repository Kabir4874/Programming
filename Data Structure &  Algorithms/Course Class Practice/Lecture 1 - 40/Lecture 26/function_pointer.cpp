#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void print(int *p)
{
    cout << *p << endl;
}
void update(int *p)
{
    // p = p + 1;
    // cout << p << endl;
    *p = *p + 1;
}
int getSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int value = 5;
    int *p = &value;
    print(p);
    update(p);
    print(p);

    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Sum: " << getSum(arr, 5) << endl;
    return 0;
}