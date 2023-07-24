#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c,d,count=0;
   long long int x,y;
   scanf("%d %d %d %d", &a,&b,&c,&d);
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
   printf(" %d %d %d %d\n", a,b,c,d);
    int ans=(a*b*c*d)%100;
    if(ans<25)
    {
        cout<<"level 0"<<endl;
    }
    else if(ans<50)
    {
         cout<<"level 1"<<endl;
    }
    else if(ans<75)
    {
         cout<<"level 2"<<endl;
    }
    else if(ans<100)
    {
         cout<<"level 3"<<endl;
    }
return 0;
}