#include <bits/stdc++.h>

using namespace std;
int n,m;long sum[102][102];int mx[102][102];
 main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>mx[i][j];
      memset(sum,10000,sizeof(sum));
        sum[1][0]=sum[0][1]=0;
      for (int y = 1; y <=n; y++) {
      for (int x = 1; x <=m; x++) {
          sum[y][x] = min(sum[y][x-1],sum[y-1][x])+mx[y][x];
        }
    }
  cout<<sum[n][m];

}
