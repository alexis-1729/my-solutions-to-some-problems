#include <bits/stdc++.h>

using namespace std;
int n,q;int vx[1000];
   /* int bins(int x){
        int a=-1,b=n;
        while(b>a+1){
            int m=(a+b)/2;
            if(vx[m]<=x){
                b=m;
            }else
            a=m;
        }
        return a;
    }*/
int main()
{ios_base::sync_with_stdio(0);cin.tie(0);
   cin>>n>>q;

   for(int i=0;i<n;i++){
    cin>>vx[i];
   }
   vx[0]--;
   int x=vx[0];
     for(int i=1;i<n;i++){
            vx[i]+=x;
            x=vx[i];
     }
    // for(int i=1;i<=n;i++)cout<<vx[i]<<" ";
       while(q--){
         int t_i;
             cin>>t_i;
            for(int i=0;i<n;i++){
                if(t_i<=vx[i]){cout<<i+1<<"\n";break;}
            }
       }
}
