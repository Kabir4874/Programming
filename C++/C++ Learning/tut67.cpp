#include<bits/stdc++.h>
using namespace std;
template<class t1, class t2>
float funcAverage(t1 a, t2 b)
{
    float avg= (a+b)/2.0;
    return avg;
}
template<class t>
void swapp(t &a, t &b)
{
    t temp=a;
    a=b;
    b=temp;
}
int main(){
   float a;
   a= funcAverage(2,6.6);
   printf("The average of these number is: %f\n", a);
   int x=43, y=22;
   swapp(x,y);
   cout<<x<<endl<<y<<endl;
return 0;
}