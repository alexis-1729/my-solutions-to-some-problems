#include <bits/stdc++.h>

using namespace std;
#define lli long long int
const int maxn=1e6+1;
vector<int>vx; int n,k;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;
    vx.resize(n);
      for(int i=0;i<n;i++){lli x;cin>>x;
      vx[i]=x%k;
      }
      multiset<lli>mt;int dif=0;
      for(int i=0;i<k;i++){
          if(mt.count(vx[i])==0)dif++;
          mt.insert(vx[i]);
      }
      int ans=0;
      for(int i=k;i<n;i++){
          if(mt.count(vx[i-k])==1)dif--;
          mt.erase(mt.find(vx[i-k]));
        if(mt.count(vx[i])==0)dif++;
        mt.insert(vx[i]);
        ans=max(ans,dif);
      }

      cout<<ans;



}
