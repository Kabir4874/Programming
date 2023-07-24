#include<stdio.h>
int main()
{
   int row, column,i,j,n=0,m=0;
   scanf("%d %d", &row, &column);
   int arr[row][column];
   for(i=0; i<row; i++)
   {
    for(j=0; j<column; j++)
    {
        scanf("%d",&arr[i][j]);
    }
   }
   for(i=1; i<row-1; i++)
   {
    for(j=1; j<column-1; j++)
    {
        if(arr[i][j]==42)
        {
            if(arr[i-1][j-1]==7 && arr[i-1][j]==7 && arr[i-1][j+1]==7)
            {
                if(arr[i][j-1]==7 && arr[i][j+1]==7)
                {
                    if(arr[i+1][j-1]==7 && arr[i+1][j]==7 && arr[i+1][j+1]==7)
                    {
                        n=i+1;
                        m=j+1;
                    }
                }
            }
        }
    }
   }
        printf("%d %d\n", n,m);

return 0;
}