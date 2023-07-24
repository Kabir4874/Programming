#include<bits/stdc++.h>
using namespace std;
int main(){
   string str;
   int a,n;
   while(cin>>str)
   {
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>n;
        cout<<str[n-1];
    }
    cout<<endl;
   }
return 0;
}