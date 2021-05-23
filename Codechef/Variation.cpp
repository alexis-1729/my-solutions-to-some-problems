#include <iostream>
#include <algorithm>
using namespace std;
long long k,n;long long vx[65006];
long long  vp=0;

 main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>vx[i];
	}
	
	sort(vx,vx+n);
	
	for(int i=0,j=1;i<n;){
		
		if(abs(vx[i]-vx[j])>=k){
		
		vp+=(n-j);
		i++;}
		else
		j++;
	}
	
	cout<<vp<<"\n";
	
	
}
