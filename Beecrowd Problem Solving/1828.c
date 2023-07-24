#include<stdio.h>
#include<string.h>
int main(){
   int n,i,j,m,a,b;
   char ch1[8],ch2[8];
   scanf("%d", &n);
   for(i=1; i<=n; i++)
   {
    scanf("%s%s", &ch1, ch2);
    if(!strcmp(ch1,ch2))
    {
        printf("Caso #%d: De novo!\n", i);
    }
    else if(!strcmp(ch1, "tesoura"))
    {
        if(!strcmp(ch2, "papel") || !strcmp(ch2, "lagarto"))
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if(!strcmp(ch2, "Spock")|| !strcmp(ch2, "pedra"))
        {
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }
   else if(!strcmp(ch1, "papel"))
    {
        if(!strcmp(ch2, "pedra") || !strcmp(ch2, "Spock"))
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if(!strcmp(ch2, "tesoura")|| !strcmp(ch2, "lagarto"))
        {
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }
    else if(!strcmp(ch1, "pedra"))
    {
        if(!strcmp(ch2, "lagarto") || !strcmp(ch2, "tesoura"))
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if(!strcmp(ch2, "Spock")|| !strcmp(ch2, "papel"))
        {
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }
    else if(!strcmp(ch1, "lagarto"))
    {
        if(!strcmp(ch2, "Spock") || !strcmp(ch2, "papel"))
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if(!strcmp(ch2, "pedra")|| !strcmp(ch2, "tesoura"))
        {
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }
    else if(!strcmp(ch1, "Spock"))
    {
        if(!strcmp(ch2, "tesoura") || !strcmp(ch2, "pedra"))
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if(!strcmp(ch2, "papel")|| !strcmp(ch2, "lagarto"))
        {
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }
    
   }
return 0;
}