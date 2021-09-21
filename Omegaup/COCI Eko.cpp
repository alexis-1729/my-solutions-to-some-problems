#include <bits/stdc++.h>

using namespace std;
#define lli long long int
const int maxn=1e6+1;
int n,p;lli vx[maxn];
bool good(lli m){
    lli ma=0;
      for(int i=0;i<n;i++){
            if(vx[i]>=m){
                ma+=vx[i]-m;
            }
      }
return ma>=p;

}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
   cin>>n>>p;
   for(int i=0;i<n;i++)cin>>vx[i];
   sort(vx,vx+n);
   lli l=0,r=1e9+1;

   while(r>l+1){
     lli m=(l+r)/2;
     if(good(m)){
        l=m;

     }else{
     r=m;
     }
   }
   cout<<l;

}
