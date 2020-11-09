#include <iostream>

using namespace std;
int n,m;
char mx[100][100];bool mb[100][100];
  void solve( int x, int y){
if(x<0 || x>=n || y<0 || y>=m )return;
if( mb[x][y] ||  mx[x][y]=='*' )return;
mb[x][y]=true;
solve(x+1,y);
solve(x-1,y);
solve(x,y+1);
solve(x,y-1);
solve(x+1,y+1);
solve(x-1,y+1);
solve(x+1,y-1);
solve(x-1,y-1);
  }
 main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
  cin>>n>>m;
  int cont=0;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>mx[i][j];
     }
    }

    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(mx[i][j]=='@' && !mb[i][j]){
        solve(i,j);
      cont++;}
     }
    }

   cout<<cont;
}
