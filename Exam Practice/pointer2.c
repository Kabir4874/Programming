#include <stdio.h>
int main()
{
   int x, y, *a, *b;
   printf("Input the first number: ");
   scanf("%d", &x);
   printf("Input the second number: ");
   scanf("%d", &y);
   a = &x;
   b = &y;
   if (*a > *b)
   {
      printf("%d is the maximum number.\n", x);
   }
   else
   {
      printf("%d is the maximum number.\n", y);
   }

   return 0;
}