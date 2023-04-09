#include <bits/stdc++.h>

using namespace std;
const int maxn=2e6;
#define lli long long int
vector<lli>arr;
lli X[maxn],Y[maxn];
int n;lli S;
void subarrays(int n,int c, lli x[]){
    for(int i=0;i<(1<<n);i++){
         lli sum=0;
         for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    sum+=arr[j+c];
                }
         }
         x[i]=sum;
    }
}
lli solve(){
   subarrays(n/2,0,X);
   subarrays(n-(n/2),n/2,Y);

   int x_s=1<<(n/2);
   int y_s=1<<(n-(n/2));
   lli ans=0;
   for(int i=0;i<x_s;i++){
       if(X[i]<=S){
           int p=lower_bound(Y,Y+y_s,S-X[i])-Y;
            if(p==y_s || Y[p]!=S-X[i])p--;

            ans=max(ans,(lli)(S==Y[p]+X[i]));
       }
   }
   return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>S;
    arr.resize(n);
    for(lli &i:arr)cin>>i;

    solve()==true?cout<<"Es falso\n":cout<<"Original\n";

}
