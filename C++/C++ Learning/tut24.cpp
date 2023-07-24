#include<iostream>
using namespace std;
class employee{
    int id;
    static int count;
    public:
    void setdata(void)
    {
        cout<<"Enter The ID:"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void)
    {
        cout<<"The id of the employee is "<<id<<" and this is employee number "<<count<< endl;
    }
    static void getcount(void)
    {
        cout<<"The value of count is "<<count<<endl;
    }
};
int employee:: count;

int main()
{

employee harry, kabir, ahmed;
harry.setdata();
harry.getdata();
employee::getcount();

kabir.setdata();
kabir.getdata();
employee::getcount();

ahmed.setdata();
ahmed.getdata();
employee::getcount();


    return 0;
}