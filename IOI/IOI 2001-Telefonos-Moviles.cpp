#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int maxn = 1024;

int n, q;
int bit[maxn][maxn];

void upd(int x, int y, int delta) {
        for (int i = x; i < n; i = i | (i + 1))
            for (int j = y; j < n; j = j | (j + 1))
                bit[i][j] += delta;
    }


   int sum(int x, int y) {
        int ret = 0;
        for (int i = x; i >= 0; i = (i & (i + 1)) - 1)
            for (int j = y; j >= 0; j = (j & (j + 1)) - 1)
                ret += bit[i][j];
        return ret;
    }

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int x;cin>>x>>n;
	while(x!=3){
            cin>>x;
         if(x==1){
                int x,y,a;
            cin>>x>>y>>a;
            upd(x,y,a);

         }else if(x==2){
             int l,b,r,t;
             cin>>l>>b>>r>>t;
             cout<<sum(r,t)-sum(l-1,t)-sum(r,b-1)+sum(l-1,b-1)<<"\n";

         }



	}

}
