#include <bits/stdc++.h>
using namespace std;
 
 
 
 main() {
   ios_base::sync_with_stdio(0);cin.tie(0);
   string pa;	vector<string>vx;
   cin>>pa;
   sort(pa.begin(),pa.end());
 
	   do{
 
            vx.push_back(pa);
 
	   }while(next_permutation(pa.begin(),pa.end()));
 
	   cout<<vx.size()<<"\n";
    for(int i=0;i<vx.size();i++)cout<<vx[i]<<"\n";
}
