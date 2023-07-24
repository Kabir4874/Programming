#include<bits/stdc++.h>
using namespace std;
class base1
{
    int data1;
    public:
    base1(int i)
    {
        data1=i;
        cout<<"base1 class constructor called"<<endl;
    }
    void printDataBase1(void)
    {
        cout<<"The value of data1 is: "<<data1<<endl;
    }
};
class base2
{
    int data2;
    public:
    base2(int i)
    {
        data2=i;
        cout<<"base2 class constructor called"<<endl;
    }
    void printDataBase2(void)
    {
        cout<<"The value of data2 is: "<<data2<<endl;
    }
};
class derived: public base1, public base2
{
    int derived1, derived2;
    public:
    derived(int a, int b, int c, int d):base1(a), base2(b)
    {
        derived1=c;
        derived2=d;
        cout<<"derived class constructor called"<<endl;
    }
    void printDataDerived(void)
    {
        cout<<"The value of derived1 is: "<<derived1<<endl;
        cout<<"The value of derived2 is: "<<derived2<<endl;
    }
};
int main(){
   derived harry(5,3,6,2);
   harry.printDataBase1();
   harry.printDataBase2();
   harry.printDataDerived();
return 0;
}