#include <bits/stdc++.h>

using namespace std;

     int n;
long long  dp[1000005];
long long   solve(long long  n){
    if(n==0)return 1;

    if(dp[n]!=-1)return dp[n];
       dp[n]=0;
    for(int i=1;i<=9;i++){
            if(n>=i){
        dp[n]+=solve(n-i);
        }
    }
   return dp[n];
}
main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
      cin>>n;
      memset(dp,-1,sizeof(dp));
      cout<<solve(n);

}
