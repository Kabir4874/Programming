#include <bits/stdc++.h>
using namespace std;
int main()
{
   string a, b, c, d, e, f;
   getline(cin, a);
   getline(cin, b);
   getline(cin, c);
   d = a.substr(0, 10);
   e = b.substr(0, 10);
   f = c.substr(0, 10);
   cout << a << b << c << endl;
   cout << b << c << a << endl;
   cout << c << a << b << endl;
   cout << d << e << f << endl;
   return 0;
}