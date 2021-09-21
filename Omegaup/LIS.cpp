#include <bits/stdc++.h>
using namespace std;
#define lli long long int

lli lis(vector<lli>a) {
	vector<lli> dp;
	for (lli i : a) {
		lli pos = lower_bound(dp.begin(), dp.end(), i) - dp.begin();
		if (pos == (int)dp.size())
			dp.push_back(i);
		else
			dp[pos] = i;
	}
	return dp.size();
}
 int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    lli n;
    cin>>n;
        vector<lli>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
            cout<<lis( a);

}
