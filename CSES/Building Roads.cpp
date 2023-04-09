#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6;
#define lli long long int
vector<lli>vx[maxn]; bool vb[maxn]; int n,m; lli ans=0; lli ct[maxn];
void dfs(int node){
       vb[node]=true; int x;
     for(int i=0;i<(int)vx[node].size();i++){
            x=vx[node][i];
            if(!vb[x]){
              dfs(x);
              }
     }
}
int main() {
       ios_base::sync_with_stdio(0);cin.tie(0);
         cin>>n>>m;
         for(int i=0;i<m;i++){
               lli u,v;cin>>u>>v;
               vx[u].push_back(v);
               vx[v].push_back(u);
         }
         for(int i=1;i<=n;i++){
                if(!vb[i]){
                         ct[ans++]=i;
               dfs(i);
 
           }
 
         }
cout<<ans-1<<"\n";
for(int i=1;i<ans;i++)
    cout<<ct[i-1]<<" "<<ct[i]<<"\n";
 
}
