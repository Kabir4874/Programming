#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    complex(int , int);
    void printnumber()
    {
        cout<<"Your number is "<<a<<" + "<< b <<"i"<<endl;
    }
};
complex:: complex(int x, int y)
{
    a=x;
    b=y;
}
int main(){
   
   complex a(4,6);
   a.printnumber();
   complex b=complex(5,7);
   b.printnumber();
return 0;
}