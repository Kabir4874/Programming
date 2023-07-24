#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   double c;
   cin>>t;
   while(t--)
   {
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double ab= sqrt((y1-y2)*(y1-y2));
    double ad= sqrt((x1-x2)*(x1-x2));
    if(ad<ab)
    {
        double f= ad/2;
        c= sqrt((f*f)+(f*f));
    }
    else
    {
        double f= ab/2;
         c= sqrt((f*f)+(f*f));
    }
    cout << fixed << setprecision(10) << c << "\n";
   }
return 0;
}