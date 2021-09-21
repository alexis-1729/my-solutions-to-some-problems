#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int maxn = 1e5+2;
int n; double hi[maxn],wi[maxn];
int main() {
 ios_base::sync_with_stdio(0);cin.tie(0);
     cin>>n;
     for(int i=1;i<=n+1;i++){
           cin>>hi[i];}

           for(int i=1;i<=n;i++)cin>>wi[i];

           double ans=0.0;
           for(int i=1;i<=n;i++){
            double t=(hi[i]+hi[i+1])/2.0;
            ans+=wi[i]*t;
           }
           cout<<setprecision(5)<<fixed<<ans;

}
