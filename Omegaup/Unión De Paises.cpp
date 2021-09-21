#include <bits/stdc++.h>

using namespace std;
#define ll long
const int maxn=1e6+2;
 int n,m;
int pa[maxn];
void in(){
     for(int i=1;i<=n;i++)pa[i]=i;
}
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
ios_base::sync_with_stdio(0);cin.tie(0);
  cin>>n>>m;
  in();
  for(int i=0;i<m;i++){
       int a,b;cin>>a>>b;
       if(!per(a,b)){
       uni(a,b);n--;}
       cout<<n<<"\n";

  }




}
