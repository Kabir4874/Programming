#include<stdio.h>
int main()
{
int cnt=0,x,y;
scanf("%d%d", &x,&y);
if(x<0){
    while(1){
        if(x%y==0){
            break;
        }
        x-=1;
        cnt++;
    }
printf("%d %d\n",x/y,cnt);
}
else{
    printf("%d %d\n", x/y,x%y);
}
return 0;
}