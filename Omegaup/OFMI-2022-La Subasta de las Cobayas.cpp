#include <bits/stdc++.h>

using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
        int n;cin>>n;
        vector<lli>v(n+1);
        for(int i=1;i<=n;i++)cin>>v[i];
        lli p[n];
        p[0]=0;p[1]=v[1]; int pos=2,cb=1;
      for(int i=2;i<=n;i++){
            if(p[pos-2]+p[pos-1]<=v[i]){
                p[pos++]=v[i]; cb=i;
            }
      }
cout<<cb;

}
