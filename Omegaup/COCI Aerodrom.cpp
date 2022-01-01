#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int maxn=1e5+1;
int n,m; ll t[maxn];
bool good(ll x){
    ll per=0;
for(int i=0;i<n;i++){
       per+=x/t[i];
}
   return per>=m;
}
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);
cin>>n>>m;
   for(int i=0;i<n;i++)cin>>t[i];

   ll a=0,b=1e18;
       while(b>a+1){
            ll m=(a+b)/2;
               if(good(m)){
                       b=m;
               }else{
                   a=m;
                }

       }
    cout<<b;
}
