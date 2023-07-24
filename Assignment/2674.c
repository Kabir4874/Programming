#include <stdio.h>
#include <stdbool.h>
bool prime(int n)
{
   if (n == 0 || n == 1)
   {
      return false;
   }
   int i;
   for (i = 2; i <= n / 2; i++)
   {
      if (n % i == 0)
      {
         return false;
      }
   }
   return true;
}
bool superPrime(int n)
{
   while (n >= 10)
   {
      int s = n % 10;
      n /= 10;
      if (!prime(s))
      {
         return false;
      }
   }
   if (n == 2 || n == 3 || n == 5 || n == 7)
   {
      return true;
   }
   else
   {
      return false;
   }
}
int main()
{
   int n;
   while (scanf("%d", &n) != EOF)
   {
      if (!prime(n))
      {
         printf("Nada\n");
      }
      else
      {
         if (superPrime(n))
         {
            printf("Super\n");
         }
         else
         {
            printf("Primo\n");
         }
      }
   }
   return 0;
}