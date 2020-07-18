#include <iostream>

using namespace std;
  int  n;
   long long int solve(int n){
      long long   dp[n+1];
      dp[0]=1;
      dp[1]=1;
     for(int i=2;i<=n;i++)
        dp[i]=dp[i-1]+dp[i-2];

     return  dp[n];
   }
 main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
   cout<< solve(n);
}
