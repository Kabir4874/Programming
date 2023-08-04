#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
    int a;
    cin>>a;
    string s;
    cin>>s;
    long long result=0;
    long long pow2=1;
    for(int i=s.size()-1; i>=0; i--)
    {
        int binary_digit= s[i]-'0';
        result=result+(binary_digit*pow2);
        pow2=pow2*2;
    }
    cout<<result<<endl;
   }
return 0;
}