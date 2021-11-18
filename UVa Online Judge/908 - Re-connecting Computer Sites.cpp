#include <bits/stdc++.h>

using namespace std;
const int maxn=1e6+5;
int n,m,k;
vector<int>ft(maxn);
int findd(int x){
    if(ft[x]==x){return x;}
    else
    ft[x]=findd(ft[x]);
    return ft[x];
}
bool pert(int a,int b){
    if(findd(a)==findd(b))
        return true;
    return false;
}
void uniond(int a,int b){
 int pa=findd(a),pb=findd(b);
 ft[pa]=pb;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
   bool si=true;
     while( cin>>n){
         if(!si){
            cout<<"\n";
         }
            si=false;
      for(int i=1;i<=n;i++)ft[i]=i;int cost1=0,cost=0;
      vector<pair<int,pair<int,int>>>grph;
    for(int i=0;i<n-1;i++){
        int a,b,c;cin>>a>>b>>c;
        cost1+=c;
    }
    cin>>k;
    for(int i=0;i<k;i++){
        int a,b,c;
        cin>>a>>b>>c;
        grph.push_back(make_pair(c,make_pair(a,b)));
    }

       cin>>m;
    for(int i=0;i<m;i++){
        int a,b,c;cin>>a>>b>>c;
        grph.push_back(make_pair(c,make_pair(a,b)));
    }

         sort(grph.begin(),grph.end());
 for(auto i:grph){
         if(!pert(i.second.first,i.second.second)){
              cost+=i.first;
            uniond(i.second.first,i.second.second);
         }
    }
    cout<<cost1<<"\n";
    cout<<cost<<"\n";}
}
