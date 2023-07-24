#include<bits/stdc++.h>
using namespace std;
int main(){
   string str;
   int count=0;
   cin>>str;
   for(int i=0; i<str.length(); i++)
   {
        if(str[i]=='1')
        {
            count++;
        }
   }
        if(count%2==0)
        {
            str=str+'0';
        }
        else
        {
            str=str+'1';
        }
   cout<<str<<endl;
return 0;
}