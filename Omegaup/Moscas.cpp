#include <bits/stdc++.h>

using namespace std;
int n,minx=INT_MAX,maxx=0,mxp;int vx[60001];
 main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(vx,0,sizeof(vx));
     cin>>n;
     while(n--){
          int x,y;
          cin>>x>>y;
           minx=min(minx,x); maxx=max(maxx,y);
          for(int i=x;i<y;i++)vx[i]++;
     }

      for(int i=minx;i<maxx;i++)
            mxp=max(mxp,vx[i]);

        cout<<mxp<<"\n";

        int mx=INT_MAX,my=0;
     for(int i=minx;i<=maxx;i++){
            if(mxp==vx[i]){
            mx=min(mx,i);my=max(my,i);

            }else
                if(mx<=my){
                cout<<mx<<" "<<my+1<<"\n";
               mx=INT_MAX;my=0;
            }
     }


}
