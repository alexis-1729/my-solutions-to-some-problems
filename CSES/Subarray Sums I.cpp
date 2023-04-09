#include <bits/stdc++.h>
 
using namespace std;
#define lli long long int
const int maxn=2e5+1;
lli n,x; lli vx[maxn];
int main()
{ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>x;
    for(int i=0;i<n;i++)cin>>vx[i];
 
       int actual=0,ans=0;
       for(int i=0,j=0;j<n;j++){
                  actual+=vx[j];
         while(actual>x){
              actual-=vx[i];
             i++;
         }
         if(actual==x)ans++;
 
       }
       cout<<ans;
 
}
