#include <bits/stdc++.h>

using namespace std;
#define ll long long int
const ll mod=1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    vector<ll>v1(n),v2(n);
    for(int i=0;i<n;i++){
        cin>>v1[i]>>v2[i];
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int aux=n-1; ll sum1=0,sum2=0;
    for(int i=0;i<n-1;i++){
        sum1=(sum1+((v1[i]*aux)%mod)%mod);sum2=(sum2+((v2[i]*aux)%mod)%mod);
        aux--;
    }

    int aux2=n-1; ll sum4=0,sum5=0;
    for(int i=n-1;i>=1;i--){
        sum4=(sum4+((v1[i]*aux2)%mod)%mod);sum5=(sum5+((v2[i]*aux2)%mod)%mod);
        aux2--;
    }
    ll ans=((sum4-sum1)+(sum5-sum2))%mod;
         ans+= ans<0?mod:0;
      cout<<ans;

}
