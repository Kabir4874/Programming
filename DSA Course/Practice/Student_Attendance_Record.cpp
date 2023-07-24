#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   int a=0,l=0,p=0;
   cout<<"s = ";
   cin>>s;
   for(int i=0; i<s.size(); i++)
   {
        if(s[i]=='A')
        {
            a++;
        }
        else if(s[i]=='L')
        {
            l++;
        }
        else if(s[i]=='P')
        {
            p++;
        }
   }
   if(a<2 && l<3)
   {
    cout<<"true"<<endl;
   }
   else
   {
    cout<<"false"<<endl;
   }
return 0;
}