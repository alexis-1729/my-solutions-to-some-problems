#include <bits/stdc++.h>

using namespace std;
#define ll long long int
const int mod=1e9+7;
const int maxn=1e6+5;
int n,k;
ll vx[maxn];
bool cmp(int a,int b){
     return a>=b;
}
int bin(ll x){
     int a=-1,b=n;
     while(b>a+1){
        int m=(a+b)/2;
        if(vx[m]<x){
            a=m;
        }else{
           b=m;
        }
     }
     return b+1;
}

int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);
cin>>n;
     for(int i=1;i<=n;i++){
         cin>>vx[i];

     }
     sort(vx,vx+n+1,cmp);

   for(int i=1;i<n;i++){vx[i]+=vx[i-1];
   }

    int q;cin>>q;
     for(int i=0;i<q;i++){
          ll p; cin>>p;
    int a=bin(p);
    if(a<=n){cout<<a<<"\n";}else{
        cout<<"-1\n";
    }
     }


}
