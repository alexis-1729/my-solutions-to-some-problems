#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
     multiset<ll>inferiores,superiores;
     ll n,k;
void insertar(ll x){
  ll val=*inferiores.rbegin();
  if(x<=val){
        inferiores.insert(x);
      if(inferiores.size()>(k+1)/2){
            superiores.insert(*inferiores.rbegin());
                inferiores.erase(inferiores.find(*inferiores.rbegin()));
      }
  }else {
          superiores.insert(x);
      if(superiores.size()>k/2){
            inferiores.insert(*superiores.begin());
                superiores.erase(superiores.find(*superiores.begin()));
      }
  }
}
 
void erasex(ll x){
    if(inferiores.find(x)!=inferiores.end()){
            inferiores.erase(inferiores.find(x));
    }else {
        superiores.erase(superiores.find(x));
    }
 
    if(inferiores.empty()){
        inferiores.insert(*superiores.begin());
        superiores.erase(superiores.find(*superiores.begin()));
    }
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
      cin>>n>>k;
     vector<ll>v(n);
     for(ll &i:v)cin>>i;
 
       inferiores.insert(v[0]);
 
    for(int i=1;i<k;i++)
            insertar(v[i]);
  cout<<*inferiores.rbegin()<<" ";
    for(int i=k;i<n;i++){
           if(k==1){
            insertar(v[i]);
            erasex(v[i-k]);
           }else {
              erasex(v[i-k]);
              insertar(v[i]);
           }
 
        cout<<*inferiores.rbegin()<<" ";
    }
 
}
