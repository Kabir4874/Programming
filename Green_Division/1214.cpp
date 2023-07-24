#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        double avg = sum / n;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > avg)
            {
                count++;
            }
        }
        double ans = (count * 100.00) / n;
        cout << fixed << setprecision(3) << ans << "%" << endl;
    }
    return 0;
}