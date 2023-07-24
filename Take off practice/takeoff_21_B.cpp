#include<bits/stdc++.h>
using namespace std;
int main(){
   int a;
   cin>>a;
   if(a>=0 && a<=15)
   {
    cout<<"Troposphere"<<endl;
   }
   else if(a>=16 && a<=50)
   {
    cout<<"Stratosphere"<<endl;
   }
   else if(a>=51 && a<=85)
   {
    cout<<"Mesosphere"<<endl;
   }
   else if(a>=86 && a<=500)
   {
    cout<<"Thermosphere"<<endl;
   }
   else if(a>=501 && a<=1000)
   {
    cout<<"Exosphere"<<endl;
   }
return 0;
}