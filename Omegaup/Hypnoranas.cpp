#include <bits/stdc++.h>

using namespace std;
struct node{
 int x1,y1,x2,y2,Tk,Tg,t;
};
int n,m;      char mc[20][20];
int mov[2][4]={
             {1,-1,0,0},
             {0,0,-1,1}
            };
bool mb[20][20][20][20][6][6];
bool valido (int x1,int y1 ){
  if(x1>=0 && x1<n && y1>=0 && y1<m ){
        if(mc[x1][y1]!='#'){
                       return true;
        }
  }
        return false;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
      cin>>n>>m;

      queue<node>q; int aux1,aux2,aux3,aux4;
      for(int i=0;i<n;i++){
         for(int j=0;j<m;j++)
         {
             cin>>mc[i][j];
              if(mc[i][j]=='K'){
                   aux1=i,aux2=j;
              } if(mc[i][j]=='G'){
                 aux3=i,aux4=j;
              }
         }
      }
      q.push({aux1,aux2,aux3,aux4,0,0,0});

      while(!q.empty()){
          node raiz=q.front();
          q.pop();
         // cout<<raiz.x1<<" "<<raiz.y1<<" "<<raiz.x2<<" "<<raiz.y2<<" "<<raiz.t<<"\n";
            if(mc[raiz.x1][raiz.y1]=='S' && mc[raiz.x2][raiz.y2]=='S'){
             cout<<raiz.t;return 0;
            }

          for(int i=0;i<4;i++){
               int x1=raiz.x1,y1=raiz.y1;
               if(raiz.Tk==0){
               x1+=mov[0][i],y1+=mov[1][i];
               }
                  if(valido(x1,y1))
                    for(int k=0;k<4;k++){
                            int x=raiz.x2,y=raiz.y2;
                    if(raiz.Tg==0){
                    x+=mov[0][k],y+=mov[1][k];
                    }
              if(valido(x,y)){
                    int tk=raiz.Tk,tg=raiz.Tg;
                    if(tk>0){
                                tk--;
                            }else
                             if(mc[x1][y1] >=49 && mc[x1][y1] <=53){
                               tk=(int)mc[x1][y1]-48;
                            }
               if(tg>0){
                            tg--;
                        }else
                         if((int)mc[x][y] >=49 && (int)mc[x][y] <=53){
                        tg=(int)mc[x][y]-48;
                         }

                       if(!mb[x1][y1][x][y][tk][tg]){
                    q.push({x1,y1,x,y,tk,tg,raiz.t+1});
                      mb[x1][y1][x][y][tk][tg]=true;
                      }
              }

          }

          }
      }
      cout<<"-1";




}
