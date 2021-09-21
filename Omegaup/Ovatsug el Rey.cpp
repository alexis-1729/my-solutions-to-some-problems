#include <bits/stdc++.h>
using namespace std;
#define lli long long int
const int maxn=1e5+1;
int n,t;int vx[2*maxn];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   /* freopen("teamwork.in", "r", stdin);
		freopen("teamwork.out", "w", stdout);*/
     cin>>n>>t;
     for(int i=1;i<=n;i++){cin>>vx[i];
        vx[i+n]=vx[i];
     }
     for(int i=(t%n)+1;i<=t-(t-n)+(t%n);i++){
        cout<<vx[i]<<" ";
     }

     //cout<<(t%n)+1<<" "<<t-(t-n)+(t%n);
}
