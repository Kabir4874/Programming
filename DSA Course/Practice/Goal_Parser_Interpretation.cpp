#include<bits/stdc++.h>
using namespace std;
int main(){
   string str,res;
   cin>>str;
   for(int i=0; i<str.size();)
   {
         if(str[i]=='G')
        {
            res.push_back('G');
            i++;
        }
       else if(str[i]=='(' && str[i+1]==')')
        {
            res.push_back('o');
            i+=2;
        }
        else if(str[i]=='(' && str[i+1]=='a')
        {
            res.push_back('a');
            res.push_back('l');
            i+=4;
        }
   }
   cout<<res<<endl;
return 0;
}