#include<bits/stdc++.h>
using namespace std;
class test
{
    int a;
    int b;
    public:
    test(int i,int j):a(i),b(j)
    {
        cout<<"Constructor Executed"<<endl;
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
    }
};
int main(){
   test t(5,8);
return 0;
}