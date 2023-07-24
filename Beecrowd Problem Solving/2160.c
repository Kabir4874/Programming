#include<stdio.h>
#include<string.h>
int main(){
   char ch[600];
   int len;
   gets(ch);
   len=strlen(ch);
   if(len>80)
   {
      printf("NO\n");
   }
   else
   {
      printf("YES\n");
   }

return 0;
}