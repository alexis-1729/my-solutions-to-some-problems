#include <bits/stdc++.h>
 
using namespace std;
#define lli long long int
#define m map<lli ,lli>
const int maxn=2e5;
using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair
 
m vx;lli v[maxn];
 lli n,x;
 main()
{
ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>x;
    for(int i=0;i<n;i++)cin>>v[i];
 
       for(int i=0;i<n;i++){
             if(vx.count(x-v[i]) ){
                    cout<<i+1<<" "<<vx[x-v[i]];
                    return 0;
             }vx[v[i]]=i+1;
       }
       cout<<"IMPOSSIBLE"<<"\n";
}
