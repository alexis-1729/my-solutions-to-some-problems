#include <bits/stdc++.h>

using namespace std;
#define lli long long int
lli n; vector<lli>vx;
lli bin(lli v,lli k,lli x){
      lli b=n-1,a=k;
      while(b>a+1){
           lli m=(b+a)/2;
           if(vx[m]-x<v){
                a=m;
           }else{
                b=m;
           }
      }

    if(vx[b]-x>=v)return b;
    return n;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    vx.resize(n);
       for(auto &i:vx)cin>>i;

       for(int i=1;i<n;i++){
        vx[i]+=vx[i-1];
       }
    lli m;cin>>m;
    while(m--)
    {
        lli v;lli k;cin>>v>>k;
           if(k==0)
        cout<<bin(v,k,0)<<"\n";
        else
         cout<<bin(v,k-1,vx[k-1])<<"\n";




    }
}
