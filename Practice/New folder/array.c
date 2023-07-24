#include<stdio.h>
int main()
{
   int a,b,c,d;
   printf("Input Rows and Columns of the 1st matrix\n: ");
   scanf("%d %d", &a,&b);
   printf("Input Rows and Columns of the 2nd matrix\n: ");
   scanf("%d %d", &c,&d);
   printf("Input elements in the first matrix :\n");
   int arr1[a][b],arr2[c][d];
   int i,j;
   for(i=0; i<a; i++)
   {
    for(j=0; j<b; j++)
    {
        printf("element - [%d],[%d] : ", i,j);
        scanf("%d", &arr1[i][j]);
    }
   }
   printf("Input elements in the second matrix :\n");
   for(i=0; i<c; i++)
   {
    for(j=0; j<d; j++)
    {
        printf("element - [%d],[%d] : ", i,j);
        scanf("%d", &arr2[i][j]);
    }
   }
   printf("The first matrix is :\n");
   for(i=0; i<a; i++)
   {
    for(j=0; j<b; j++)
    {
        printf("%d ", arr1[i][j]);
    }
    printf("\n");
   }
   printf("The second matrix is :\n");
   for(i=0; i<c; i++)
   {
    for(j=0; j<d; j++)
    {
        printf("%d ", arr2[i][j]);
    }
    printf("\n");
   }
   printf("The Matrices can be compared :\n");
   int count=0;
   if(a==c && b==d)
   {
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            if(arr1[i][j]==arr2[i][j])
            {
                count=0;
            }
            else
            {
                count=1;
                break;
            }
        }
    }
    if(count==0)
    {
        printf("Two matrices are equal.\n");
    }
    else
    {
        printf("Two matrices are not equal.\n");
    }
   }
   else
    {
        printf("Two matrices are not equal.\n");
    }


return 0;
}