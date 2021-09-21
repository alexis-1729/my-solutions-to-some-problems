#include <iostream>
using namespace std;
#define mod %1000000007
long long  n, dp[1000002];
 long long   solve(long long   n){
     if(n==1)return 1;
     if(n==2)return 3;
     if(dp[n])return dp[n];

     return dp[n]=solve(n-1)+solve(n-2)mod;


 }
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
   cin>>n;
   cout<<solve(n)mod;
}
