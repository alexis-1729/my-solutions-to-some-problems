#include <bits/stdc++.h>

using namespace std;
#define lli long long 
typedef pair<lli,lli>pi;
map<lli,lli>mp;
lli n;
  bool   cmp(pi a,pi b){
  	  return a.second < b.second;

  }
   void sort(){
   	vector<pi>vx;
    for (auto& it : mp) {
        vx.push_back(it);
    }
	   sort(vx.begin(),vx.end(),cmp);

	      	  for (auto& it : vx) {
            cout << it.second << " ";
            }

   }
main() {
	ios_base::sync_with_stdio(0);cin.tie(0);

	cin>>n;
	for(lli i=1;i<=n;i++){
		lli x;
		cin>>x;
		if(x%3==0){

			mp.insert(pi(x,i));

		}
	}

	if(mp.empty()){
		cout<<"No hay triples.";
	}else{

      cout<<mp.size()<<"\n";
	  sort();
}


}
