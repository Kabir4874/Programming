#include<stdio.h> 
int main() 
{ 
    printf("pointer in C: introduction\n"); 
    int x=100,y=400,z=800; 
    int *p1,*p2,*p3; 
    p1=&x; 
    p2=&y; 
    p3=&z; 
    if(*p1>*p2 && *p1>*p3) 
    { 
        printf("the largest number is : %d\n", *p1); 
    } 
    else if(*p2>*p1 && *p2>*p3) 
    { 
        printf("the largest number is : %d\n", *p2); 
    } 
    else 
    { 
        printf("the largest number is : %d\n", *p3); 
    } 
 
 
    return 0; 
}