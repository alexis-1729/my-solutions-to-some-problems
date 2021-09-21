#include <bits/stdc++.h>

using namespace std;
int n,m; int vx[100],vy[100];
   int bin(int x){
        int a=-1;int b=m;
             while(b>a+1){
                    int m=(a+b)/2;
                    if(vy[m]<=x){
                        a=m;
                    }else
                    {
                        b=m;
                    }
             }
    return b;
   }


 main()
{
 ios_base::sync_with_stdio(0);cin.tie(0);
     cin>>n;
     for(int i=0;i<n;i++)cin>>vx[i];

     cin>>m;
       for(int i=0;i<m;i++)cin>>vy[i];
       sort(vy,vy+m);

     for(int i=0;i<n;i++)
            cout<<bin(vx[i])<<" ";

}
