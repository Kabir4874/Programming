#include <bits/stdc++.h>
using namespace std;
int main()
{
 double x, y,z,n;
    cin >> n;
    y = n/(log(n));
    z=1.25506*y;
    // cout << fixed<<setprecision(1)<<y;
    // cout<<" "<<fixed<<setprecision(1)<<z<<endl;
    printf("%.1lf %.1lf", y,z);
    return 0;
}