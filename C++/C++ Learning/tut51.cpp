#include<bits/stdc++.h>
using namespace std;
class Complex
{
    int real, imaginary;
    public:
    void getdata()
    {
        cout<<"The real part is: "<<real<<endl;
        cout<<"The imaginary part is: "<< imaginary<<endl;
    }
    void setdata(int a, int b)
    {
        real=a; 
        imaginary=b;
    }
};
int main(){
//    Complex c1;
//    Complex *ptr= &c1;
   Complex *ptr= new Complex;
//    (*ptr).setdata(3,65);
   ptr->setdata(3,65);

   (*ptr).getdata();
return 0;
}