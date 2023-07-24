#include<bits/stdc++.h>
using namespace std;
int main(){
   string s1,s2;
   int caso=1;
   while(getline(cin, s1), getline(cin, s2))
   {
        int pos=0, subseq=0, count=0;
        for(int i=0, j=0; i<s2.size(); i++)
        {
            if(s1[j]==s2[i])
            {
                count++;
                j++;
            }
            else
            {
                count=0;
                j=0;
                if(s1[j]==s2[i])
            {
                count++;
                j++;
            }
            }
            if(count==s1.size())
            {
                pos=i+2- s1.size();
                count=0;
                j=0;
                subseq++;
            }
        } 
        cout<<"Caso #"<<caso++<<":"<<endl;
        if(subseq)
        {
            cout<<"Qtd.Subsequencias: "<<subseq<<endl;
            cout<<"Pos: "<<pos<<endl;
        }
        else
        {
            cout<<"Nao existe subsequencia"<<endl;
        }
        cout<<endl;
   }
return 0;
}