#include <bits/stdc++.h>

using namespace std;

queue<int>cola;int n;

int jefe;
main()
{
 ios_base::sync_with_stdio(0);cin.tie(0);
 cin>>n;
 vector<int >graph[n+10];bool mb[n+10]={false};int vx[n+10],vy[n+10];
 for(int i=1;i<=n;i++)
    {cin>>vx[i];
        }
        for(int i=1;i<=n;i++){
            cin>>vy[i];
            if(vy[i]==-1){
                jefe=i;
                continue;
            }
            		graph[vy[i]].push_back(i);
        }
        int maxn[n+10];int ans=0;
        mb[jefe]=true; maxn[jefe]=vx[jefe];
        cola.push(jefe);
        while(!cola.empty()){
            int pa=cola.front();
                cola.pop();
            for(int i=0;i<graph[pa].size();i++){
                int pi=graph[pa][i];
                if(!mb[pi]){
                    mb[pi]=true;
                cola.push(pi);
                  ans=max(ans,maxn[pa]-vx[pi]);
                    maxn[pi]=max(vx[pi],maxn[pa]);

                }
            }

        }
        cout<<ans<<"\n";

}
