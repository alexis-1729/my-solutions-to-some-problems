#include <bits/stdc++.h>

using namespace std;
const int maxn=1e6+5;
#define lli long long int
lli n,k;
lli vx[maxn];
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);
       cin>>n>>k;
       lli maxx=0;
       for(int i=0;i<n;i++){cin>>vx[i];maxx=max(maxx,vx[i]);}
       lli ans=0;bool si=false;
       for(int i=0;i<n;i++){
            if(vx[i]>k){ans+=k;si=true;}
        else ans+=vx[i];

       }
    if(!si){
    ans+=abs(maxx-k);
    cout<<ans;return 0;
    }
       cout<<ans;
}
