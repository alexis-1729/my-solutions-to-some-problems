#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn=2002;
int n,m,k;
char mx[maxn][maxn];
struct node{
int x,y,d;
};
queue<node>q;
int vx[]={1,0,0,-1},
    vy[]={0,1,-1,0};
    int inx,iny;
main(){

  ios_base::sync_with_stdio(); cin.tie(0);

   cin>>n>>m>>k;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>mx[i][j];
        if(mx[i][j]=='$'){
            inx=i,iny=j;
        }
    }
   }
 q.push({inx,iny,0});

 while(!q.empty()){
    node pa=q.front();
      q.pop();

    for(int i=0;i<4;i++){
        node hi=pa;

        hi.x+=vx[i];hi.y+=vy[i];
        if(hi.x>=0 && hi.y>=0 && hi.y<m && hi.x<n  && mx[hi.x][hi.y]!='#'  && mx[hi.x][hi.y]!='*' && hi.d+1<=k){
              mx[hi.x][hi.y]='*';hi.d++;
              q.push(hi);
        }
    }


 }



   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
            if(i==inx && j==iny){
                cout<<"$";
            }else
        cout<<mx[i][j];
    }
    cout<<"\n";
   }


}
