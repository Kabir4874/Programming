#include<iostream>
using namespace std;
class number
{
    int a;
    public:
    number()
    {
        a=0;
    }
    number(int num)
    {
        a=num;
    }
    number(number &obj)
    {
        cout<<"Copy constructor called!!"<<endl;
        a=obj.a;
    }
    void display()
    {
        cout<<"The number for this object is "<<a<<endl;
    }
};
int main(){
   number x,y,z(43);
   x.display();
   y.display();
   z.display();
   number z1(x);
    z1.display();
return 0;
}