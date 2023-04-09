#include <bits/stdc++.h>
 
using namespace std;
const int maxn=2e5;
#define lli long long int
 
lli vx[maxn];
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    lli n;
           cin>>n;
          for(int i=0;i<n;i++)cin>>vx[i];
        lli ans=vx[0],maxx=vx[0];
          for(int i=1;i<n;i++){
            maxx=max(maxx+vx[i],vx[i]);
              ans=max(ans,maxx);
          }
 
 
cout<<ans;
   }
 
