#include<iostream>
#include <vector>
using namespace std;

main(){
ios_base::sync_with_stdio(); cin.tie(0);
int n,k;
  cin>>n>>k;
    long long vx[n]; vector<int>mp(k);
    for(int i=0;i<n;i++){
    cin>>vx[i];
     mp[vx[i]%k]++;}

    long long ans=0;
   for(int i=0;i<k;i++){

        if(mp[i]>0)
        ans+=((mp[i]-1)*(mp[i]))/2;
   }
   cout<<ans;
}
