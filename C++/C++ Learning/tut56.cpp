#include<bits/stdc++.h>
using namespace std;
class baseClass
{
public:
    int var_base=1;
     virtual void display()
    {
        cout << " 1 Displaying Base class variable var_base " << var_base << endl;
    }
};
class derivedClass : public baseClass
{
public:
    int var_derived=2;
    void display()
    {
        cout << " 2 Displaying Base class variable var_base " << var_base << endl;
        cout << " 2 Displaying Derived class variable var_derived " << var_derived << endl;
    }
};
int main(){
   baseClass *base_class_pointer;
   baseClass obj_base;
   derivedClass obj_derived;
   base_class_pointer=&obj_derived;
   base_class_pointer->display();
return 0;
}