#include <bits/stdc++.h>

using namespace std;
const int MAX_N = 1e7;
#define lli long long int
lli max_div[MAX_N + 1];
lli n,k,q;
void criba(){
for (int i = 2; i <= MAX_N; i++) {
		if (max_div[i] == 0) {
			for (int j = i; j <= MAX_N; j += i) {
				max_div[j] = i;
			}
		}
	}
}
bool divx(int x){
		int div_num = 1;
		while (x != 1) {


			int prime = max_div[x];
			int count = 0;
			while (x % prime == 0) {
				count++;
				x /= prime;
			}
			div_num *= count + 1;
		}
    return div_num>=q;
	}

int main() {

    ios_base::sync_with_stdio(0);cin.tie(0);
    criba();
vector<lli>v,mp;
    cin>>n>>k>>q;
     v.resize(n+1);
     mp.assign(1000001,0);
     for(int i=0;i<n;i++)
       cin>>v[i];

     lli ans=0,f=0;mp[0]=1;
      for(int i=0;i<n;i++){
            f+=(divx(v[i]));
                    if(f-k>=0)
                ans+=mp[f-k];
             mp[f]++;

      }

     cout<<ans;

}
