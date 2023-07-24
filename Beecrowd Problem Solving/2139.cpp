#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
   while(cin>>a>>b)
   {
    switch (a)
    {
    case 1: c=360-b;
        break;
    case 2: c=360-b-31;
        break;
    case 3: c=360-b-31-29;
        break;
    case 4: c=360-b-31-29-31;
        break;
    case 5: c=360-b-31-29-31-30;
        break;
    case 6: c=360-b-31-29-31-30-31;
        break;
    case 7: c=360-b-31-29-31-30-31-30;
        break;
    case 8: c=360-b-31-29-31-30-31-30-31;
        break;
    case 9: c=360-b-31-29-31-30-31-30-31-31;
        break;
    case 10: c=360-b-31-29-31-30-31-30-31-31-30;
        break;
    case 11: c=360-b-31-29-31-30-31-30-31-31-30-31;
        break;
    case 12: c=360-b-31-29-31-30-31-30-31-31-30-31-30;
        break;
    
    }
    
    if(c==0)
    {
        cout<<"E natal!"<<endl;
    }
    else if(c==1)
    {
        cout<<"E vespera de natal!"<<endl;
    }
    else if(c<0)
    {
        cout<<"Ja passou!"<<endl;
    }
    else
    {
        cout<<"Faltam "<<c<<" dias para o natal!"<<endl;
    }

   }

return 0;
}