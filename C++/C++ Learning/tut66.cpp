#include<bits/stdc++.h>
using namespace std;
template <class t1=int, class t2=float, class t3= char>
class kabir
{
    public:
    t1 a;
    t2 b;
    t3 c;
    kabir(t1 x, t2 y, t3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
    }
};
int main(){
   kabir <> h(4, 65.2, 'c');
   h.display();
   cout<<endl;
   kabir <float , char, char> k(5.5, 'g', 'a');
   k.display();
return 0;
}