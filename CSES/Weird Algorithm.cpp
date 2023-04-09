#include <iostream>
 
using namespace std;
int n,m,k;
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
 cout<<n<<" ";
 while(n>1){
       if(n%2==0){
        n/=2;
       }else
        n=n*3+1;
 
         cout<<n<<" ";
 }
 
}
