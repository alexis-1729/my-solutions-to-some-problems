#include <bits/stdc++.h>

using namespace std;
#define lli long long int
int n;
vector<int>vx[10000];
void bfs( int a,int b){
     queue<int>q; vector<bool>vb(10000,0);
     q.push(a); vector<int>dist(10000);
     dist[a]=-1; bool s=false; vb[a]=true;
     while(!q.empty()){
           int p=q.front();
           q.pop();
         for(int i:vx[p]){
                 if(!vb[i]){
                        vb[i]=true;
                       dist[i]=dist[p]+1;
                       q.push(i);
                 }else{
                     s=true;
                    dist[i]=dist[p]+1;

                 }
         }
     }
     //cout<<s<<" "<<vb[b]<<"\n";
     //for(bool i:vb)cout<<i<<" ";
    // cout<<b<<" ";
     if(s==true){
            if(vb[b]){
                  cout<<"Yes "<<dist[b]<<"\n";

            }else{
              cout<<"No\n";
            }
     }else{
       cout<<"No\n";
     }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

      cin>>n;

      for(int i=0;i<n;i++){
           int a,b;cin>>a>>b;
        vx[a].push_back(b);
      }
      int a,b;cin>>a>>b;

      while(a!=0){
      bfs(a,b);
        cin>>a>>b;

      }

}
