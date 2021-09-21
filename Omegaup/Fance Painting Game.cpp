#include <bits/stdc++.h>
using namespace std;
#define lli long long int
lli n,k;
lli gcd(lli a, lli b) {
	return b == 0 ? a : gcd(b, a % b);
}
main(){
  ios_base::sync_with_stdio(0);cin.tie(0);
        /*freopen("lightson.in", "r", stdin);
		freopen("lightson.out", "w", stdout);*/
    cin>>n>>k;
 cout<<gcd(n,k+1);





}
