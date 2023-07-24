#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int k= 300-n;
   int over= k/6;
   int ball= k-(over*6);
   cout<<over<<" Over and "<<ball<<" Ball remaining"<<endl;
return 0;
}