#include <bits/stdc++.h>
using namespace std;
int n,l,c=0; char pa[3003],pa1[3000003]; int sum1=0,sum=0;  int oc[52];
  int lt(char x){
     if(x<='Z' && x>='A')return x-'A';
     return x+26 -'a';

  }
main(){
  ios_base::sync_with_stdio(0);cin.tie(0);oc[0]=1;
for (int i=1; i<52; i++) {
        oc[i] = oc[i-1] * 3109;
    }   cin>>n>>l;
     cin>>pa>>pa1;
       for(int i=0;i<n;i++){
          sum+=oc[lt(pa[i])];
          sum1+=oc[lt(pa1[i])];
       }
       if(sum==sum1)c++;
         for(int i=n;i<l;i++){
              sum1+=oc[lt(pa1[i])]-oc[lt(pa1[i-n])];
            if(sum==sum1)c++;

         }
  cout<<c;
}
