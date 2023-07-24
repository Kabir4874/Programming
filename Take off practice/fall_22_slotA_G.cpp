#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   for(int i=1; i<=t; i++)
   {
    int x1,y1,d;
    cin>>x1>>y1>>d;
    double b= (2.0*d)/y1;
    double ab= sqrt((x1*x1)+(y1*y1));
    double bc= sqrt(((x1-b)*(x1-b)+(y1*y1)));
    double area= (ab*bc*b)/(4*d);
    cout <<"Case "<<i<<": "<< fixed << setprecision(15) << area*2 <<endl;
   }
return 0;
}