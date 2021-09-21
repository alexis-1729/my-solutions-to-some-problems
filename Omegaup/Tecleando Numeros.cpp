#include <bits/stdc++.h>

using namespace std;
#define ll long long
map<ll,ll>mx;map<ll,ll>::iterator it;
ll x;char p;int n;

int  main() {
 	ios_base::sync_with_stdio(0);cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p>>x;
		if(p=='A'){mx[x]++;
		}else
		if(p=='B'){
			it=mx.find(x);
			if(it!=mx.end())
				cout<<mx[x]<<"\n";
			else cout<<"0\n";
		}
		
	}
	
	return 0;
	
}
