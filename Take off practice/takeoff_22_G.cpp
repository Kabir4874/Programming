#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,c=0;
    cin>>n;
   getchar();
    char s[1000];
    cin>>s;
    while(1){
    for(int i=1;i<n;i++){
       if(s[i]==s[i-1]){
           printf("Yes\n%d %d\n",i,i+1);
           c++;
           break;
       } 
    }
  if(c==0){  for(int i=2;i<n;i++){
        if(s[i]==s[i-2]){
            printf("Yes\n%d %d\n",i-1,i+1);
            c++;
            break;
            
        }
        
    }}
   if(c==0) cout<<"No\n";
    break;
    }
    return 0;
}