#include <bits/stdc++.h>

using namespace std;
const int maxn=1e6;
#define lli long long int
lli t,n;lli vx[maxn];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>t>>n;
    for(int i=0;i<n;i++)cin>>vx[i];

    sort(vx,vx+n);

 lli ans=0,sum=0,i=0;

 while(sum+vx[i]<=t && i<n){
       sum+=vx[i];ans++;
       i++;
 }

 cout<<ans;

}
