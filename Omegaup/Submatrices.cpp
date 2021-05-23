#include <bits/stdc++.h>

using namespace std;
const int maxn=1e5;
#define lli long long int
lli n,m,x,y; int mx[1001][1001],mx1[1001][1001];bool mb[1001][1001];

void busqueda(int x1,int y1){
     for(int i=x1;i<x+x1;i++){
        for(int j=y1;j<y+y1;j++){
               if(mx1[i-(x1-1)][j-(y1-1)]!=mx[i][j])return;
        }
     }
     for(int i=x1;i<x+x1;i++){
        for(int j=y1;j<y+y1;j++){
               mb[i][j]=true;
        }
     }


}

int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);
     cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>mx[i][j];
            }
        }

       cin>>x>>y;
       for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
              cin>>mx1[i][j];
        }
       }
       memset(mb,false,sizeof(mb));
       for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            busqueda(i,j);

        }
       }
      for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<mb[i][j]<<" ";
        }
        cout<<"\n";
      }

}
