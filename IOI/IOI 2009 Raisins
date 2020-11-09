#include<bits/stdc++.h>

using namespace std;
int mx[51][51];int n,m;
int dp[51][51][51][51];
int  solve(int xi,int xf,int yi,int yf ){
    if(xi==xf && yi==yf)return 0;
    if(dp[xi][xf][yi][yf])return dp[xi][xf][yi][yf];
      int r=1e9;
      for(int i=xi;i<xf;i++){
          r=min(r,solve(xi,i,yi,yf)+solve(i+1,xf,yi,yf));
      }
        for(int i=yi;i<yf;i++){
          r=min(r,solve(xi,xf,yi,i)+solve(xi,xf,i+1,yf));
      }
      return dp[xi][xf][yi][yf]=r+mx[xf][yf]-mx[xi-1][yf]-mx[xf][yi-1]+mx[xi-1][yi-1];
}
 main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);
      cin>>n>>m;
      for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>mx[i][j];
            mx[i][j]+=mx[i][j-1]+mx[i-1][j]-mx[i-1][j-1];
        }
      }
     cout<< solve(1,n,1,m);
}
