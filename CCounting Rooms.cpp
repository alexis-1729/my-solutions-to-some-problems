#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+5;
#define lli long long int
char mx[maxn][maxn]; bool mb[maxn][maxn]; int n,m; lli ans=0;
void solve(int i,int j){
        if(i<0 || i>=n || j<0 || j>=m || mb[i][j] || mx[i][j]=='#')return;
            mb[i][j]=true;
 
            solve(i+1,j);
            solve(i,j+1);
            solve(i,j-1);
            solve(i-1,j);
 
}
int main() {
       ios_base::sync_with_stdio(0);cin.tie(0);
         cin>>n>>m;
           for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            cin>>mx[i][j];
 
           for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                   if(!mb[i][j] && mx[i][j]=='.'){
                    solve(i,j);
                    ans++;
                   }
 
            }
           }
           cout<<ans;
}
