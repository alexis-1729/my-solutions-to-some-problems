#include <bits/stdc++.h>

using namespace std;
const int maxn=1e5+2;
int n,m;
vector<int>vx[maxn];
int ind[maxn];
int main()
{
 ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        vx[a].push_back(b);
        ind[b]++;
    }
    using T= priority_queue<int, vector<int>, greater<int>>;
       T q;
       for(int i=0;i<n;i++){
            if(ind[i]==0){
                q.push(i);
            }
       }

     vector<int>TPS;
      while(!q.empty()){
          int node=q.top();
          q.pop();
          TPS.push_back(node);
          for(int v:vx[node]){
                  ind[v]--;
                  if(ind[v]==0)q.push(v);
          }
      }
    if((int)TPS.size()!=n){
        cout<<"-1\n";return 0;
    }
	for (int i=0;i<n;i++)
	{
		cout<<TPS[i]<<" ";
	}
}
