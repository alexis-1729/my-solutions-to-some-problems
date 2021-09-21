#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn=1e4+2;
int n,m,k;
main(){
ios_base::sync_with_stdio(); cin.tie(0);
   cin>>m>>n>>k;
   queue<int>q[m];
   for(int i=0;i<k;i++){
       char t;cin>>t;
         if(t=='F')
         {
             int a,b;cin>>a>>b;
             q[b-1].push(a);
         }
          if(t=='R'){
             int c;cin>>c;
           while(!q[c-1].empty()){
                 cout<<q[c-1].front()<<"\n";
                 q[c-1].pop();
           }

         }
   }

}
