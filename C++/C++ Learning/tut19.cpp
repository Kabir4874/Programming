#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
int sum( int a, int b, int c)
{
    return a+b+c;
}
int volume(int a, int b)
{
    return (3.14*a*b);
}
int volume(int a, int b, int c)
{
    return (a*b*c);
}
int volume(int a)
{
    return (a*a*a);
}
int main()
{
cout<<"The sum of 8 and 9 is "<<sum(8,9)<<endl;
cout<<"The sum of 5,8 and 9 is "<<sum(5,8,9)<<endl;
cout<<"The volume of a cylinder of 5 and 9 is "<<volume(5,9)<<endl;
cout<<"The volume of a cube of 9 is "<<volume(9)<<endl;
cout<<"The volume of a rectangular box of 5 and 9 is "<<volume(5,9)<<endl;


    return 0;
}