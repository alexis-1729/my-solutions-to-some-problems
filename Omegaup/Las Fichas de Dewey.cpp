#include <bits/stdc++.h>

using namespace std;
const int maxn=1e6+2;
vector<int>v[maxn],pht;int n;
int c=0;
void dfs(int node){

     for(int i:v[node]){
         c++;
            pht.push_back(i);
         dfs(i);
     }

}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
      cin>>n;int k;
      while(n--){
        int a,b;cin>>a>>b;
        v[a].push_back(b);
      }
      cin>>k;
         pht.push_back(k);
         dfs(k);
    cout<<c+1<<"\n";
    for(int i:pht)cout<<i<<" ";

}
