#include <bits/stdc++.h>
 
using namespace std;
const int maxn=2e5;
#define lli long long int
struct inf{
   lli i,f;
}vx[maxn];
bool cmp(inf a,inf b){
     return b.f>a.f;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    lli n;
     cin>>n;
   for(int i=0;i<n;i++){
       cin>>vx[i].i>>vx[i].f;
   }
 
   sort(vx,vx+n,cmp);
 
  int ans=0;
  int actual=-1;
   for(int i=0;i<n;i++){
        if(vx[i].i>=actual){
             actual=vx[i].f;
                ans++;
                }
   }
 
cout<<ans;
}
