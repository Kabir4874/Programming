#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void fastIO()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}
#define MOD 1000000007;
long long int countDerangements(int n) {

    vector<long long int> dp(n+1,0);
    dp[1]=0;
    dp[2]=1;
    for(int i=3; i<=n; i++){
        long long int first= dp[i-1]%MOD;
        long long int second= dp[i-2]%MOD;
        long long int sum= (first+second)%MOD;
        long long int ans= ((i-1)*sum)%MOD;
        dp[i]=ans;
    }
    return dp[n];
}
int main()
{
fastIO();
   
return 0;
}