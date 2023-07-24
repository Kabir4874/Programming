#include<iostream>
using namespace std;
float moneyreceived(float money, float interest=1.04)
{
    return money*interest;
}
int main()
{
int money=100000;
cout<<"If you have "<<money<<" taka you will get "<<moneyreceived(money)<<endl;
cout<<"VIP: If you have "<<money<<" taka you will get "<<moneyreceived(money, 1.1)<<endl;



    return 0;
}