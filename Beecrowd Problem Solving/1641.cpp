#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, w, l, count = 1;
    while (1)
    {
        cin >> r;
        if (r == 0)
        {
            break;
        }
        cin >> w >> l;
        float T_area = r * 2;
        float P_area = sqrt(pow(w, 2) + pow(l, 2));
        if (T_area >= P_area)
        {
            cout << "Pizza " << count << " fits on the table." << endl;
            count++;
        }
        else
        {
            cout << "Pizza " << count << " does not fit on the table." << endl;
            count++;
        }
    }
    return 0;
}