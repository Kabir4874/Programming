#include<bits/stdc++.h>
using namespace std;
class employee
{
    public:
    int id;
    float salary;
    employee(int inpId)
    {
        id=inpId;
        salary=34.0;
    }
    employee(){}
};
class programmer:public employee
{
    public:
    int languagecode;
    programmer(int inpId)
    {
        id=inpId;
        languagecode=9;
    }
    void getdata()
    {
        cout<<id<<endl;
    }

};
int main(){
   employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer skillF(10);
    cout << skillF.languagecode<<endl;
    cout << skillF.id<<endl;
    skillF.getdata();
return 0;
}