#include <bits/stdc++.h>

using namespace std;
#define lli long long int
   const int MAXN=1e5; int n,b; lli vx[MAXN];
bool good(lli x){
    lli sum=0;
     for(int i=0;i<n;i++){
        sum+=vx[i];sum-=x;
        if(sum<0)
        return false;
     }
return true;

}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
       cin>>n;
       for(int i=0;i<n;i++)cin>>vx[i];
       lli l=0,r=1e9,m;
       while(r>l+1){
          m=(l+r)/2;
           if(good(m)){
                l=m;
           }else
           r=m;

       }
       cout<<l;
}
