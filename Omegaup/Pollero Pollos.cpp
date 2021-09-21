#include <bits/stdc++.h>

using namespace std;
#define lli long long int
const int maxn=1e5+1;
int n,p;int vx[maxn];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
   cin>>n>>p;
   for(int i=0;i<n;i++)cin>>vx[i];
  sort(vx,vx+n);
  int c=0;
  for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(i!=j){
               if(vx[i]+vx[j]<=p){
                   c++;
               }else{
               break;
               }}
        }
  }
   cout<<c/2;

}
