#include <bits/stdc++.h>

using namespace std;
#define lli long long int
const int maxn=1e6+1;
vector<bool>vb(maxn);int n,u,k;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
     cin>>n>>u>>k;
       for(int i=0;i<n;i++){int x;cin>>x;vb[x]=true;}
         int v=0;int ans=0;
         for(int l=1,r=1;r<=u;r++){
            if(!vb[r])v++;
               while(v>k){
                   if(!vb[l])v--;l++;
               }
               if(v<=k){//cout<<v<<" ";
                ans=max(ans,r-l+1);
               }
         }
         cout<<ans;

}
