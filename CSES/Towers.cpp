#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int maxn=1e5+2;
int n;
main(){
  ios_base::sync_with_stdio();
    cin.tie(0);
   cin>>n;
   multiset<int>ms;
  for(int i=0;i<n;i++){
       int x;cin>>x;
          auto it=ms.upper_bound(x);
          if(it==ms.end()){
            ms.insert(x);
          }else{
              ms.erase(it);
              ms.insert(x);
 
          }
  }
  cout<<ms.size();
}
