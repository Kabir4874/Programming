#include <bits/stdc++.h>
using namespace std;
class shopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Id of the item is: " << id << endl;
        cout << "Price of the item is: " << price << endl;
    }
};
int main()
{
    int size = 3;
    shopItem *ptr = new shopItem[size];

    shopItem *ptrTemp = ptr;
    int p, i;
    float q;
    for(i=0; i<size; i++)
    {
        cout<<"Enter Id and Price of item: "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for(i=0; i<size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;

    }

    return 0;
}