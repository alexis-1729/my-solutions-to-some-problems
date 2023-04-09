#include <bits/stdc++.h>
 
using namespace std;
const int maxn=2e5;
#define lli long long int
lli vx[maxn];lli n;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
      cin>>n;
 
      for(int i=0;i<n;i++)cin>>vx[i];
 
      sort(vx,vx+n);
 
       lli ans=0;
      for(int i=0;i<n;i++){
           ans+=abs(vx[n/2]-vx[i]);}
 
      cout<<ans;
}
