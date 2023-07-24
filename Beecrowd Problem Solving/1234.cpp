#include<bits/stdc++.h>
using namespace std;
int main(){
        string s;
   while(getline(cin, s))
   {
    int n=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=' ')
        {
            if(n==0)
            {
                n=1;
                putchar(toupper(s[i]));
            }
            else
            {
                n=0;
                putchar(tolower(s[i]));
            }
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
   }
return 0;
}