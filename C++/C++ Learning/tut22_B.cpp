#include<iostream>
using namespace std;
class c2;
class c1
{
    int val;
    public:
    void indata(int a)
    {
        val=a;
    }
    void display(void)
    {
        cout<< val << endl;
    }
      friend void exchange(c1 &,c2 &);
};
class c2
{
    int val2;
    public:
    void indata(int a)
    {
        val2=a;
    }
    void display(void)
    {
        cout<< val2 << endl;
    }
    friend void exchange(c1 &,c2 &);
};
void exchange(c1 &x, c2 &y)
{
    int temp=x.val;
    x.val=y.val2;
    y.val2=temp;
}
int main()
{

c1 o1;
c2 o2;
o1.indata(8);
o2.indata(3);
exchange(o1,o2);
cout<<"The value of c1 after Exchanging becomes: ";
o1.display();
cout<<"The value of c2 after Exchanging becomes: ";
o2.display();
    return 0;
}