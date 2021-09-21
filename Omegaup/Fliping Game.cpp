#include <bits/stdc++.h>

using namespace std;
#define lli long long int
const int maxn=1e6+1;
lli vx[maxn];int n;
 main()
{
ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    int ze=0,in=INT_MAX;
    for(int i=0;i<n;i++){cin>>vx[i];
    if(vx[i]==0){ze++;in=min(in,i);}}
    int ans=0,ct=0;int one=n-ze;
    if(one==n){cout<<n-1;return 0;}
    for(int i=in;i<n;i++){
           if(vx[i]==0 && ze-1>=0){
              ct++; ze--;
              ans=max(ans,ct);
           }else
               if(vx[i]==1 && ze>=1){
                     ct--;
                     if(ct<0)ct=0;
               }
    }
cout<<one+ans;

}
