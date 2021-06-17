#include <iostream>

using namespace std;
   #define maxn 1002
   int n;
   int ma[maxn][maxn];
   bool ma2[maxn][maxn];
int res(int x,int y){

    if(x>n&&y>n ){
        return 0;
    }
    if(ma2[x][y])return ma[x][y];

    ma2[x][y]=true;

      if(x==n){
        return ma[x][y];
      }
        ma[x][y]+=max(res(x+1,y),res(x+1,y+1));
          return ma[x][y];
}
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cin>>ma[i][j];
    }
   }
    cout<<res(1,1);
    return 0;
}
