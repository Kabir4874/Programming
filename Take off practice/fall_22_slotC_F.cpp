#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   string str,str2;
   cin>>str;
   for(int i=0; i<str.size(); i++)
   {
    if(str[i]>='A' && str[i]<='Z')
    {
        str[i]= str[i]+32;
    }
   }
   for(int i= str.size()-1; i>=0; i--)
   {
    str2.push_back(str[i]);
   }
   if(str==str2)
   {
    cout<<"Yes"<<endl;
   }
   else
   {
    cout<<"No"<<endl;
   }

return 0;
}