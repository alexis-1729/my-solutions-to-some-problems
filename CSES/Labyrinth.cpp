#include <bits/stdc++.h>
 
using namespace std;
using pi=pair<int,int>;
bool mb[1001][1001];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
 
    int n,m;cin>>n>>m;
    char mc[n][m];
    queue<pi>q;
    int finx,finy,inix,iniy;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mc[i][j];
            if(mc[i][j]=='A'){
                q.push({i,j});mb[i][j]=true;
                inix=i,iniy=j;
            }else if(mc[i][j]=='B'){
              finx=i,finy=j;
            }
        }
    }
 
    int mx[]={1,0,-1,0},
        my[]={0,1,0,-1};
        char cm[]={'D','R','U','L'};
        int ans=0;string camino="";
    while(!q.empty()){
            pi a=q.front();q.pop();
        if(a.first==finx && a.second==finy){
                cout<<"YES\n";
            while(a.first!=inix || a.second!=iniy){
                ans++; camino+=mc[a.first][a.second];
                   if(mc[a.first][a.second]=='U'){
 
                      a.first+=1;
 
                   }else if(mc[a.first][a.second]=='D'){
 
                   a.first-=1;
 
                   }else if(mc[a.first][a.second]=='L'){
 
                   a.second+=1;
 
                   }else{
 
                   a.second-=1;
 
                   }
             //cout<<a.first<<" "<<a.second <<" "<<mc[a.first][a.second]<<"\n";
            }
            reverse(camino.begin(),camino.end());
            cout<<ans<<"\n"<<camino;
            return 0;
        }
 
        for(int i=0;i<4;i++){
            pi h=a;
            h.first+=mx[i]; h.second+=my[i];
            if(h.first>=0 && h.first<n && h.second>=0 && h.second<m && !mb[h.first][h.second] && mc[h.first][h.second]!='#'){
            mc[h.first][h.second]=cm[i];
            mb[h.first][h.second]=true;
            q.push({h.first,h.second});
            }
        }
    }
cout<<"NO\n";
 
 
}
