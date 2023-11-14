#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
class heap
{
public:
    int arr[100];
    int size = 0;
    void insert(int val)
    {
        size++;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
            }
            else
            {
                return;
            }
        }
    }
    void display()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void deleteNode()
    {
        if (size == 0)
        {
            return;
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
};
int main()
{
    fastIO();
    heap h;
    for (int i = 0; i < 5; i++)
    {
        int k;
        cin >> k;
        h.insert(k);
    }
    h.display();
    return 0;
}