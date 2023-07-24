#include<iostream>
using namespace std;
class shop
{
    
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initcounter(void)
    {
        counter=0;
    }
    void setpirce(void);
    void displayprice(void);
};
void shop::setpirce(void)
{
    cout<<"Enter Id of your item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop:: displayprice(void)
{
    for(int i=0; i<counter; i++)
    {
        cout<<"The Price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main()
{
    shop dokan;
    dokan.initcounter();
    dokan.setpirce();
    dokan.setpirce();
    dokan.setpirce();
    dokan.displayprice();


    return 0;
}