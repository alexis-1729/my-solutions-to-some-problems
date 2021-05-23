#include <bits/stdc++.h>

using namespace std;
const int maxn=1e6+5;
#define lli long long int
lli n,k;
lli vx[maxn];
map<string ,int>mp; bool mb[1001][1001];
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);
       cin>>n;
         for(int i=1;i<=n;i++){
                 string a;
                 cin>>a;
                 mp[a]=i;

         }
         for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int x;cin>>x;
                mb[i][j]=x;
            }
         }
       int q;cin>>q;
       for(int i=0;i<q;i++){
            string a,b;
              cin>>a>>b;

               cout<<mb[mp[a]][mp[b]]<<"\n";
       }

}
