#include <bits/stdc++.h>
using namespace std;
#define lli long long int
//const int maxn=1e5+1,maxx=1e3+1;
#define pi pair<lli,lli>
vector<int>fat,tam;
struct DSU{
  void inicio(int n){
    fat.resize(n+1);
    tam.assign(n+1,1);
    for(int i=1;i<=n;i++)fat[i]=i;
  }
  int padre(int x){
    if(fat[x]==x){
      return x;}
      else
       fat[x]=padre(fat[x]);
       return fat[x];
  }
  bool pertenencia(int a,int b){
     if(padre(a)==padre(b))return true;
     return false;
  }
  void uni(int a,int b){
    int pa=padre(a),pb=padre(b);
       fat[pa]=pb;
       tam[pb]+=tam[pa];
       
  }

};
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
       DSU Esd;
       int n,q;
       cin>>n>>q;
       Esd.inicio(n);
       while(q--){
        char c;cin>>c;
        if(c=='A'){
        int a,b;cin>>a>>b;
        if(!Esd.pertenencia(a,b)){
            Esd.uni(a,b);
         }
        }else
        {
            int x;cin>>x;
            cout<<tam[Esd.padre(x)]<<"\n";

        }
       }

}
