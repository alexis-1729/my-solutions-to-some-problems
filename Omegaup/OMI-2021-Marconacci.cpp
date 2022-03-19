#include <bits/stdc++.h>

using namespace std;
#define mod 1000000007
#define lli long long
     lli q; lli dp[1000002];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

         cin>>q;

         dp[1]=1,dp[2]=1;
        for(lli i=3;i<=1000001;i++){
               dp[i]=(dp[i-1]+dp[i-2])%mod;
        }
         while(q--){
               lli a,b,pos;
               cin>>a>>b>>pos;
               if(pos==1)
                   cout<<a<<"\n";
               else if(pos==2)
                 cout<<b<<"\n";
               else{
                   lli ans=(a*dp[pos-2]+b*dp[pos-1])%mod;
                  cout<<ans<<"\n";
                  }
         }

}
