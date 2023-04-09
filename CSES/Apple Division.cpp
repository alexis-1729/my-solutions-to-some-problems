#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int maxn=1e5+2;
int n; ll vx[21];
main(){
 
  ios_base::sync_with_stdio();
    cin.tie(0);
   cin>>n;
  for(int i=0;i<n;i++)cin>>vx[i];
 
  ll ans=(ll)1e18;
  for(int i=0;i<(1<<n);i++){
    ll s1=0,s2=0;
    for(int j=0;j<n;j++){
        if(i&(1<<j)){
            s1+=vx[j];
        }else{
            s2+=vx[j];
        }
    }
    ans=min(ans,abs(s1-s2));
  }
  cout<<ans;
}
