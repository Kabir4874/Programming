#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int k= n%3;
    int m= n/3;
   if(n%3==0)
   {
    cout<<"Equilateral"<<endl;
   }
   else
   {
    if(m*2>k+m)
    {

        cout<<"Isosceles"<<endl;
    }
    else 
    {
        cout<<"Invalid"<<endl;
    }
   }
   
return 0;
}