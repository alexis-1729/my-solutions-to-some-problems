#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
      int n,k;cin>>n>>k;
        string v;
        cin>>v;
      int cd=0,ca=0;int ans=0;
      for(int r=0,l=0;r<n;r++){
          if(v[r]=='D')cd++;
          else{
            ca++;
          }

        while(ca>k){
             if(v[l]=='D')cd--;
             else{
                ca--;
             }
             l++;
        }
        ans=max(ans,cd);
      }
      cout<<ans;
}
