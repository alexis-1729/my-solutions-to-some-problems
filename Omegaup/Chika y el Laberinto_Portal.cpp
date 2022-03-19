#include <bits/stdc++.h>

using namespace std;
#define pi pair<int,int>
const int maxn=1e3+1;

 int n,m,p;
int vx[]={0,0,-1,1},
    vy[]={1,-1,0,0};
    vector<pi>v[27];
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);
     cin>>n>>m>>p;
     char mx[n][m];
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mx[i][j];
              if(mx[i][j]>=97 && mx[i][j]<=122){
                 v[(mx[i][j]-96)].push_back(make_pair(i,j));
              }
        }
       }
       queue<pi>q;bool mb[n+1][m+1]; int dist[n+1][m+1];
       memset(dist,0,sizeof(dist));memset(mb,0,sizeof(mb));
       q.push(pi{0,0});
      mb[0][0]=true;
    while(!q.empty()){
        pi a=q.front();
           q.pop();
           //cout<<a.first<<" "<<a.second<<"\n";
        if(a.first==n-1 && a.second==m-1){
            cout<<dist[a.first][a.second];return 0;
        }
           for(int i=0;i<4;i++){
                pi h=a; //cout<<h.first<<" "<<h.second<<" "<<dist[h.first][h.second]<<"\n";
                h.first+=vx[i]; h.second+=vy[i];
               if(h.first>=0 && h.first<=n-1 && h.second>=0 && h.second<=m-1 && !mb[h.first][h.second] && mx[h.first][h.second]!='#'){

                    if((int)mx[h.first][h.second]>=97 && (int)mx[h.first][h.second]<=122){
                            if(v[(int)mx[h.first][h.second]-96].size()>0){
                                mb[h.first][h.second]=true;
                                int x=h.first;int y=h.second;
                                 dist[h.first][h.second]=dist[a.first][a.second]+1;
                                 q.push(h);
                                 if( h.first==v[mx[x][y]-96][1].first && h.second==v[mx[x][y]-96][1].second){
                                h.first=v[mx[x][y]-96][0].first; h.second=v[mx[x][y]-96][0].second;}else
                                {h.first=v[mx[x][y]-96][1].first; h.second=v[mx[x][y]-96][1].second;}
                                if(!mb[h.first][h.second]){
                                 mb[h.first][h.second]=true;
                                 dist[h.first][h.second]=dist[x][y];
                                 q.push(h);}
                    }

                    }else{
                        mb[h.first][h.second]=true;
                        dist[h.first][h.second]=dist[a.first][a.second]+1;
                        q.push(h);

                    }
               }
           }
        }
        cout<<-1;

}
