
#include <bits/stdc++.h>

        using namespace std;
        int n;const int maxn=1e5;
        #define lli long long int
        vector<pair<int,int>>vx;

        bool cmp(pair<int,int>a,pair<int,int>b){
              if(a.first==b.first){
                    return a.second>b.second;
              }else{
                    return a.first<b.first;
              }

        }

        int main()
        {
          ios_base::sync_with_stdio(0);cin.tie(0);
            cin>>n;

            for(int i=0;i<n;i++){
                int l,r;cin>>l>>r;
                vx.push_back(make_pair(l,1));
                vx.push_back(make_pair(r,-1));
            }
            sort(vx.begin(),vx.end(),cmp);

            lli ans=0;lli sum=0;
            for(auto x:vx){
                  sum+=x.second;
                  ans=max(ans,sum);
                  //cout<<x.first<<" "<<x.second<<"\n";

            }
            cout<<ans;

        }
