#include <bits/stdc++.h>

    using namespace std;
     #define intl long
     const intl maxn=1e6;
     int n,m;
      vector<intl>vx[maxn];
      bool vb[maxn]; unsigned int  c=0;
     void dfs(int node){
          vb[node]=true;intl x;
          for(int i=0;i<vx[node].size();i++){
             x=vx[node][i];
             if(!vb[x]){dfs(x); }

          }

     }
     main()
    {
        ios_base::sync_with_stdio(0);cin.tie(0);
          cin>>n>>m;
           for(int i=0;i<m;i++){
                int x,y;
           cin>>x>>y;
           vx[x].push_back(y);vx[y].push_back(x);
           }


             for(int i=1;i<=n;i++){
                    if(!vb[i]){
                   dfs(i);c++;}
             }
          cout<<c-1;
    }
