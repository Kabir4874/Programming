#include <stdio.h>
int main()
{
   int a, b, count;
   while (scanf("%d %d", &a, &b) != EOF)
   {
      int arr[102][102];
      int i, j;
      for (i = 0; i < 102; i++)
      {
         for (j = 0; j < 102; j++)
         {
            arr[i][j] = 0;
         }
      }
      for (i = 1; i < a + 1; i++)
      {
         for (j = 1; j < b + 1; j++)
         {
            scanf("%d", &arr[i][j]);
         }
      }
      for (i = 1; i < a + 1; ++i)
      {
         for (j = 1; j < b + 1; ++j)
         {
            if (arr[i][j] == 1)
            {
               printf("9");
            }
            else
            {
               count = 0;
               if (arr[i - 1][j] == 1)
               {
                  count++;
               }
               if (arr[i + 1][j] == 1)
               {
                  count++;
               }
               if (arr[i][j - 1] == 1)
               {
                  count++;
               }
               if (arr[i][j + 1] == 1)
               {
                  count++;
               }
               printf("%d", count);
            }
         }
         printf("\n");
      }
   }

   return 0;
}