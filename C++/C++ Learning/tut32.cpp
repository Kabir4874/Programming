#include<iostream>
using namespace std;
class simple
{
    int data1;
    int data2;
    int data3;
    public:
     simple(int x, int y=8, int z=9)
    {
        data1=x;
        data2=y;
        data3=z;
    }
    void printdata();
};
void simple:: printdata()
{
    cout<<"The value of data1, data2 and data3 is "<<data1<<", "<<data2<<" and "<<data3<<endl;
}
int main(){
   simple s(12);
   s.printdata();
return 0;
}