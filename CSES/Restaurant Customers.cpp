#include <bits/stdc++.h>
 
        using namespace std;
        int n;const int maxn=1e5;
        #define lli long long int
        vector<pair<int,int>>vx;
        int main()
        {
          ios_base::sync_with_stdio(0);cin.tie(0);
            cin>>n;
 
            for(int i=0;i<n;i++){
                int l,r;cin>>l>>r;
                vx.push_back(make_pair(l,1));
                vx.push_back(make_pair(r,-1));
            }
            sort(vx.begin(),vx.end());
 
            lli ans=0;lli sum=0;
            for(auto x:vx){
                  sum+=x.second;
                  ans=max(ans,sum);
 
            }
            cout<<ans;
 
        }
