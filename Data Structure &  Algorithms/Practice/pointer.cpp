#include<bits/stdc++.h>
using namespace std;
int main(){
   int x=4;
   int *p_x=&x;
   cout<<"Address x:  "<<&x<<endl;
   cout<<"Value p_x: "<<p_x<<endl;
   cout<<"Value *p_x: "<<*p_x<<endl;
   int **p_p_x= &p_x;
   cout<<"Address p_x: "<<&p_x<<endl;
   cout<<"Value p_p_x: "<<p_p_x<<endl;
   cout<<"Value *p_p_x: "<<*p_p_x<<endl;
   cout<<"Value **p_p_x: "<<**p_p_x<<endl;
return 0;
}