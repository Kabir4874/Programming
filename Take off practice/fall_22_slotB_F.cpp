#include <bits/stdc++.h>  
using namespace std;
int main(){
    string str;
    string rmv;
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n,m;
        cin>>n>>m;
       cin>>str;
        for(int j=0; j<m; j++)
        {
            cin>>rmv[j];
            str.erase(remove(str.begin(),str.end(),rmv[j]),str.end());
        }
        cout<<"Case "<<i<<": "<<str<<endl; 
    }
    return 0;
}