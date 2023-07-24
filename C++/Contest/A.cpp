#include<bits/stdc++.h>
using namespace std;
int main()
{   string s;
int i=1;
   while(1)
   {
      if(s=="*")
        {
            break;
        }
        cin>>s;
        if(s=="Hajj")
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else if(s=="Umrah")
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
       
        i++;
   }
return 0;
}