#include <iostream>

using namespace std;
long long int vx[100000];int n;
long long  bin(long long int  x){
  int a=1,b=n;
    while(a<=b){
        int m=(a+b)/2;
        if(vx[m]==x)return m;
        
        if(vx[m]<x){
             a=m+1;
        }else
         b=m-1;
    }
  return 0;
}
 main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
      cin>>n;
      for(int i=1;i<=n;i++){
        cin>>vx[i];
      }
      int k;
      cin>>k;
       while(k--){
            int x;cin>>x;
       cout<<bin(x)<<" ";


       }
}
