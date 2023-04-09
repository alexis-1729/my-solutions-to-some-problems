#include <bits/stdc++.h>
 
using namespace std;
const int maxn=2e5;
#define lli long long int
int n,m; multiset<int>ms;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
     cin>>n>>m;
     for(int i=0;i<n;i++){
      int x;cin>>x;ms.insert(x);
     }
 
 
      while(m--){
           lli x;cin>>x;
            auto it=ms.upper_bound(x);
            if(it==ms.begin()){cout<<"-1\n";}else{
                cout<<*(--it)<<"\n";
                ms.erase(it);
            }
 
 
      }
}
