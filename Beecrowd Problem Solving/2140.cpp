#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c;
   while(1)
   {
    cin>>a>>b;
    if(a==0 && b==0)
    {
        break;
    }
    c=b-a;
    if(c<=187 && c>2)
    {
        cout<<"possible"<<endl;
    }
    else
    {
        cout<<"impossible"<<endl;
    }
   }
return 0;
}