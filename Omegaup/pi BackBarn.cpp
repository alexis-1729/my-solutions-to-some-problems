#include <iostream>

using namespace std;
long  n,m,k,ans=0;
char  mx[15][15]; bool mb[15][15];
  void  solve(long i,long j,long c ){
      if(i<=0 || i>n || j<=0 || j>m || mx[i][j]=='T' || mb[i][j] || c>k)return ;
      if(i==1 && j==m){ans++; return ;}
      mb[i][j]=true;


      solve(i+1,j,c+1);
      solve(i-1,j,c+1);
      solve(i,j+1,c+1);
      solve(i,j-1,c+1);

 mb[i][j]=false;
  }



 main()
{
ios_base::sync_with_stdio(0);cin.tie(0);
  cin>>n>>m>>k;
  for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    cin>>mx[i][j];


solve(n,1,1);

cout<<ans;
}
