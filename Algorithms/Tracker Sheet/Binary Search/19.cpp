#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int k;
    while (cin >> k)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max = 0;
        int s, e;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            int j = i;
            for (; j < n; j++)
            {
                if (arr[j] >= arr[i] + k)
                {
                    break;
                }
                count++;
            }
            if (count > max)
            {
                max = count;
                s = arr[i];
                e = arr[j - 1];
            }
        }
        cout << max << " " << s << " " << e << endl;
    }
    return 0;
}