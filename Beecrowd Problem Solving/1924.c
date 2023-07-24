#include<stdio.h>
#include<string.h>
int main(){
   int n,i;
   char ch[200];
   while(scanf("%d", &n)!=EOF)
   {
        getchar();
        for(i=0; i<n; i++)
        {
            gets(ch);
        }
        printf("Ciencia da Computacao\n");
   }
return 0;
}