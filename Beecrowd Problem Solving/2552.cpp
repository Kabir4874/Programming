#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a, b;
   while (cin >> a >> b)
   {
      int arr[a + 1][b + 1];
      for (int i = 1; i < a + 1; i++)
      {
         for (int j = 1; j < b + 1; j++)
         {
            cin >> arr[i][j];
         }
      }
      for (int i = 1; i < a + 1; i++)
      {
         for (int j = 1; j < b + 1; j++)
         {
            if (arr[i][j] == 1)
            {
               cout << "9";
            }
            else
            {
               int count = 0;
               if (arr[i + 1][j] == 1)
               {
                  count++;
               }
               if (arr[i - 1][j] == 1)
               {
                  count++;
               }
               if (arr[i][j + 1] == 1)
               {
                  count++;
               }
               if (arr[i][j - 1] == 1)
               {
                  count++;
               }
               cout << count;
               count = 0;
            }
         }
         cout << endl;
      }
   }
   return 0;
}