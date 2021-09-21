#include <bits/stdc++.h>

using namespace std;
#define lli long long int
const int maxn=1e3+1;
int n,m;int mx[maxn][maxn];int pref[maxn][maxn];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    /*freopen("guess.in", "r", stdin);
	freopen("guess.out", "w", stdout);*/
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){cin>>mx[i][j];

      }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
                pref[i][j]=mx[i][j]+pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1];
        }
    }
    int q;cin>>q;
    for(int i=0;i<q;i++){
        int x1,y1,x2,y2;
        cin>>x1>>x2>>y1>>y2;
        cout<<pref[x2][y2]-pref[x1-1][y2]-pref[x2][y1-1]+pref[x1-1][y1-1]<<"\n";
    }
}
