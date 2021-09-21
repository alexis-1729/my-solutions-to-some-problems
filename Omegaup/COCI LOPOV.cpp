#include <bits/stdc++.h>

using namespace std;
#define lli long long int
const int maxn=3e5+1; lli n,k;
vector<pair<lli,lli>>vx;

bool cmp(pair<lli,lli>a,pair<lli,lli>b){
  if(a.second!=b.second)return a.second>b.second;

  return a.first<b.first;
}
multiset<lli>ml;
int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  cin>>n>>k;
  for(int i=0;i<n;i++){lli x,y;cin>>x>>y;
    vx.push_back(make_pair(x,y));
  }
  sort(vx.begin(),vx.end(),cmp);


  for(int i=0;i<k;i++){
       lli x;cin>>x;
       ml.insert(x);
  }
lli ans=0;
  for(int i=0;i<n;i++){
         if(!ml.empty())
         {
             if(ml.lower_bound(vx[i].first)!=ml.end()){
                      ans+=vx[i].second;
                      ml.erase(ml.lower_bound(vx[i].first));
             }
         }else{
         break;
         }
  }
cout<<ans;
}
