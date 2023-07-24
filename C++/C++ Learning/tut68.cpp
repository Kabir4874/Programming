#include<bits/stdc++.h>
using namespace std;
template<class t>
class harry
{
    
    t data;
    public:
    harry(t a)
    {
        data=a;
    }
    void display();
};
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}
template<class t>
void harry<t>:: display()
{
    cout<<data<<endl;
}
int main(){
   harry <int> h(5);
   h.display();
   func(4);
return 0;
}