#include <bits/stdc++.h>

using namespace std;

struct pip {
int f,sf,ss,p;
};
bool visitados [200][200][201]; int mb[200][200];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
       int n,m,to,ti;cin>>n>>m>>to>>ti;
       queue<pip>qp;
        int x1,y1;cin>>x1>>y1;

   qp.push({x1-1,y1-1,0,0});
   visitados[x1-1][y1-1][0]=true;
       char mx[n][m];
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
              cin>>mx[i][j];
        }
       }
       int movx[]={1,0,-1,0},
           movy[]={0,1,0,-1};



        while(ti--){
             int x,y,t;cin>>x>>y>>t;
             mb[x-1][y-1]=t;
        }


   while(!qp.empty()){
           pip a=qp.front(); qp.pop();
       /*  if(a.ss==to){
               cout<<a.p;return 0;
         }*/
       for(int i=0;i<4;i++){
            pip h=a;
             h.f+=movx[i];h.sf+=movy[i];
          if(h.f>=0 && h.f<n && h.sf>=0 && h.sf<m && mx[h.f][h.sf]!='#'){
                      h.p++;
                   if(mb[h.f][h.sf]==h.ss+1)h.ss++;
                    if(!visitados[h.f][h.sf][h.ss]){
                         visitados[h.f][h.sf][h.ss]=true;
                         if(h.ss==to){
               cout<<h.p;return 0;
         }
                   qp.push(h);
                   }
                }
          }
       }
}
