#include <stdio.h>
 
int main() {
 
    double b,c,total;
    char a;
    scanf("%s%lf%lf", &a,&b,&c);
    total=b+c*0.15;
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}