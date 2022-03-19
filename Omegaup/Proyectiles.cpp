#include <bits/stdc++.h>

using namespace std;
int n;     vector<pair<long,long>>v;
bool bf(pair<long,long>x){
    int a=0,b=n-1;
      while(a<=b){
            int m=(a+b)/2;
          if(v[m]==x){
                return true;}
       if(v[m]>x){
          b=m-1;

       }else{
         a=m+1;
       }
      }
return false;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int k;
       cin>>n>>k;
     v.resize(n);
       for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
       }
       sort(v.begin(),v.end());

       while(k--){
           pair<long,long>a;cin>>a.first>>a.second;
             if(bf(a)){
                cout<<"0\n";
             }else{
             cout<<"1\n";
             }
       }

}
