#include <iostream>
using namespace std;
void swapPointer(int &a,int  &b)
{
int temp=a;
a=b;
b=temp;
}
int main()
{ 
int a=2, b=4;
cout<<"The value of A is "<<a<<" B is "<<b<<endl;
swapPointer(a, b);
cout<<"The value of A is "<<a<<" B is "<<b<<endl;
    return 0;
}