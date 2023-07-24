#include <bits/stdc++.h>
using namespace std;
int main()
{
   double a, b, c, d, e, f, g, h, i, j, k, l;
   while (cin >> a >> b >> c >> d >> e >> f >> g)
   {
      k = pow((c - a), 2);
      l = pow((d - b), 2);
      i = sqrt(k + l);
      i = i + (e * 1.50);
      j = f + g;
      if (i > j)
      {
         cout << "N" << endl;
      }
      else
      {
         cout << "Y" << endl;
      }
   }
   return 0;
}