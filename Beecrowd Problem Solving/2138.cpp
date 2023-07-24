#include<bits/stdc++.h>
using namespace std;
int main(){
   string str;
   while(cin>>str)
   {
   int ch[10]={0,0,0,0,0,0,0,0,0,0};
        for(int i=0; i<str.length(); i++)
        {
            if(str[i]=='0')
            {
                ch[0]++;
            }
            else if(str[i]=='1')
            {
                ch[1]++;
            }
            else if(str[i]=='2')
            {
                ch[2]++;
            }
            else if(str[i]=='3')
            {
                ch[3]++;
            }
            else if(str[i]=='4')
            {
                ch[4]++;
            }
            else if(str[i]=='5')
            {
                ch[5]++;
            }
            else if(str[i]=='6')
            {
                ch[6]++;
            }
            else if(str[i]=='7')
            {
                ch[7]++;
            }
            else if(str[i]=='8')
            {
                ch[8]++;
            }
            else if(str[i]=='9')
            {
                ch[9]++;
            }
        }
        int large=ch[0],index=0;
        for(int i=1; i<10; i++ )
        {
            if(ch[i]>=large)
            {
                large=ch[i];
                index=i;
            }
        }
        cout<<index<<endl;
   }
return 0;
}