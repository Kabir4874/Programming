#include<bits/stdc++.h>
using namespace std;
int main(){
   string s1,s2;
   cin>>s1>>s2;
   for(int i=0; i<s2.size()+1; i++)
   {
     s1.erase(remove(s1.begin(), s1.end(), s2[i]),s1.end());
   }
   cout<<s1<<endl;
return 0;
}