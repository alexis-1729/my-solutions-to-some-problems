#include<bits/stdc++.h>
using namespace std;
  struct node{
  	int x,y,d;
  };
const int vx[4] = {1,0,-1,0}, vy[4] = {0,1,0,-1};

int n,s;
char mx[805][805];

int vis[805][805];
int dep[805][805];

int xi, yi;

void solve(){
    queue<node> cola;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if(mx[i][j] == 'H'){
                cola.push(node{i,j,0});
                vis[i][j] = 1;
            }
        }
    }
    while (!cola.empty()){
        node pa=cola.front();
        cola.pop();
        dep[pa.x][pa.y] = pa.d;
        for (int i=0; i<4; i++) {
            node hi=pa;
			hi.x+=vx[i];hi.y+=vy[i];
            if(hi.x < 0 || hi.y < 0 || hi.x >= n || hi.y >= n) continue;
            if(vis[hi.x][hi.y]) continue;
            if(mx[hi.x][hi.y] != 'G' && mx[hi.x][hi.y] != 'M') continue;
            vis[hi.x][hi.y] = 1;
            cola.push(node{hi.x,hi.y,hi.d+1});
        }
    }
}

bool expan(int x){
    memset(vis,0,sizeof(vis));
    queue<node>cola;
    cola.push(node{xi,yi,x*s});
    vis[xi][yi] = 1;
    while (!cola.empty()) {
       node pa=cola.front();
         cola.pop();
        if(mx[pa.x][pa.y] == 'D') return 1;
        for (int i=0; i<4; i++) {
            node hi=pa;
            hi.x+=vx[i];hi.y+=vy[i];
            if(hi.x < 0 || hi.y < 0 || hi.x >= n || hi.y >= n) continue;
            if(vis[hi.x][hi.y]) continue;
            if(mx[hi.x][hi.y] != 'G' && mx[hi.x][hi.y] !='D') continue;
            if(mx[hi.x][hi.y] != 'D' && (hi.d+1) / s >= dep[hi.x][hi.y]) continue;
            vis[hi.x][hi.y] = 1;
            cola.push(node{hi.x,hi.y,hi.d+1});
        }
    }
    return 0;
}

 main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>s;
    for (int i=0; i<n; i++) {
        cin>>mx[i];
        for (int j=0; j<n; j++) {
            if(mx[i][j] == 'M') xi = i, yi = j;
        }
    }
    solve();
    int s = 0, b = dep[xi][yi]-1;
    while (s != b) {
        int m = (s+b+1)/2;
        if(expan(m)) s = m ;
        else b = m -1;
    }
    if(expan(s)) cout<<s;
    else cout<<"-1";
}
