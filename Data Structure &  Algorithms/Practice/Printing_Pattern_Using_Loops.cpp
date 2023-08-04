#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,n,b,l,i,j,k;
   cin>>k;
   n=(k*2)-1;
   int arr[n][n];
        a = n;
        b = 1;
        for (l = k; l >= 1; l--)
        {
            for (i = a; i >= b; i--)
            {
                for (j = a; j >= b; j--)
                {
                    arr[i][j] = l;
                }
            }
            a--;
            b++;
        }
   for(int i=1; i<=n; i++)
   {
    for(int j=1; j<=n; j++)
    {
        cout<<arr[i][j];
        cout<<" ";
    }
    cout<<endl;
   }
return 0;
}