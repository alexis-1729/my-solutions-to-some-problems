#include <iostream>

using namespace std;
int  n;

main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin>>n;
  long long  dp[n+1];
	dp[1]=2;dp[0]=1;
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2]%1000000;
	}
	cout<<dp[n-1]%1000000;


}
