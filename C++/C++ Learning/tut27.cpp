#include<iostream>
using namespace std;
class complex;
class calculator
{
    public:
    int add(int a, int b)
    {
        return (a+b);
    }
    int sumrealcomplex(complex o1, complex o2);
    int sumcompcomplex(complex o1, complex o2);
};
class complex
{
    int a,b;
    // friend int calculator :: sumrealcomplex(complex o1, complex o2);
    // friend int calculator :: sumcompcomplex(complex o1, complex o2);
    friend class calculator;
    public:
    void setNumber(int n1, int n2)
    {
        a=n1;
        b=n2;
    }
    void printNumber()
    {
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int calculator :: sumrealcomplex(complex o1, complex o2)
{
    return (o1.a+o2.a);
}
int calculator :: sumcompcomplex(complex o1, complex o2)
{
    return (o1.b+o2.b);
}

int main()
{
 complex o1,o2;
 o1.setNumber(1,4);
 o2.setNumber(3,8);
 calculator calc;
 int res= calc.sumrealcomplex(o1,o2);
cout<<"The sum of the real part of o1 and o2 is "<<res<<endl;
 int resc= calc.sumcompcomplex(o1,o2);
cout<<"The sum of the complex part of o1 and o2 is "<<resc<<endl;

    return 0;
}