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
 string pa;
     cin>>pa;
         char s;int ans=0,c=1;
     for(int i:pa){
         if(s==i){
 
            c++;ans=max(ans,c);
         }else
         {
             c=1;s=i;
         }
     }
     cout<<max(ans,c);
}
