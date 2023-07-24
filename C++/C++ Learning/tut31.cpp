#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    complex(int , int);
    complex (int x)
    {
        a=x;
        b=0;
    }
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
   complex c1(4,5);
   c1.printnumber();

   complex c2(5);
   c2.printnumber();

return 0;
}