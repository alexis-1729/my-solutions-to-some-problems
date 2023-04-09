#include <iostream>
 
using namespace std;
int  n,m,k;
#define ll long long
#define ios  ios_base::sync_with_stdio(0);cin.tie(0);
/*void setIO(string name = ""){
	ios_base::sync_with_stdio(0); cin.tie(0);
	if(name.size()){
		freopen((name+".in").c_str(), "r", stdin);
		freopen((name+".out").c_str(), "w", stdout);
	}
}*/
 main()
{
 ios
 ll n;
 cin>>n;
   ll xx=0, ans=0;
 for(int i=0;i<n;i++){
    ll x;cin>>x;
      xx=max(xx,x);
      ans+=xx-x;
 }
  cout<<ans;
}
