#include<bits/stdc++.h>
using namespace std;
char upper(char c)
{
    return 'A'+(c-'a');
}
int main(){
   string ch;
   getline(cin, ch);
   for(int i=0; i<ch.size(); i++)
   {
    if(ch[i]>='a' && ch[i]<='z')
    {
        ch[i]=upper(ch[i]);
        cout<<ch[i];
    }
    if(ch[i]==' ')
    {
        cout<<endl;
    }
   }

return 0;
}