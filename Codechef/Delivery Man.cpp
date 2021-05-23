
#include <bits/stdc++.h>

using namespace std;
int n;int x,y;
bool ma(pair<int,int>vx,pair<int,int>vy){
	return abs(vx.first)>abs(vy.first);
}
 main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin>>n>>x>>y;
vector<int>vx(n),vy(n);vector<pair<int,int>>pi(n);
		for(int i=0;i<n;i++){
		cin>>vx[i];
	}for(int i=0;i<n;i++){
	    cin>>vy[i],pi[i]={vx[i]-vy[i],i};

	}
	long long  ans=0;
	sort(pi.begin(),pi.end(),ma);
	for(int i=0;i<n;i++){
           if(x&&y){
           	if(pi[i].first>0){
			   ans+=vx[pi[i].second];x--;}
           	else{
           	ans+=vy[pi[i].second];y--;}
		   }else
		   if(y){
		   	ans+=vy[pi[i].second];
		   }else
		   {
		   	ans+=vx[pi[i].second ];																 }
          	}
	cout<<ans<<"\n";
}
