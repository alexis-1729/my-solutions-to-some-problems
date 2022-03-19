#include <bits/stdc++.h>

using namespace std;
const int maxn=2e3+2;
int n,m;
vector<int>v[maxn],pa;

int en(int x){
if(pa[x]==x){
    return x;
}
else
    pa[x]=en(pa[x]);
   return pa[x];
}
void uni(int x,int y){
   int ra,rb;
   ra=en(x);rb=en(y);
   pa[ra]=rb;
}
bool per(int x,int y){
    if(en(x)==en(y))return true;
    return false;
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    pa.resize(n+2);
     for(int i=1;i<=n;i++){
        pa[i]=i;
     }
    for(int i=0; i<m; i++)
    {
        int a,b;
        cin>>a>>b;
         uni(a,b);

    }
    int c=0;
  for(int i=1;i<=n;i++){
     for(int j=i+1;j<=n;j++){
        if(!per(i,j))c++;
     }

  }
cout<<c;


}
