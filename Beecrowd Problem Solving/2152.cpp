#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   while(n--)
   {
    int a,b,c;
    cin>>a>>b>>c;
    if(c==1)
    {
        printf("%02d:%02d - A porta abriu!\n", a,b);
    }
    else if(c==0)
    {
        printf("%02d:%02d - A porta fechou!\n", a,b);
    }
   }
return 0;
}