#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
const int maxn=102;
int cnt=0;bool mb[maxn][maxn]; char mx[maxn][maxn],mx2[maxn][maxn]; int ans=0,ans2=0;
void solve(int i,int j,char c){
   if(mx[i][j]!=c || i<=0 || i>n || j<=0 || j>n || mb[i][j])return;
   mb[i][j]=true;
   solve(i,j+1,c);
   solve(i,j-1,c);
   solve(i+1,j,c);
   solve(i-1,j,c);
}
void solve2(int i,int j,char c){
   if(mx2[i][j]!=c || i<=0 || i>n || j<=0 || j>n || mb[i][j])return;
   mb[i][j]=true;
   solve2(i,j+1,c);
   solve2(i,j-1,c);
   solve2(i+1,j,c);
   solve2(i-1,j,c);
}

void pr2(char c ){
    for( int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
             if(mx2[i][j]==c    && !mb[i][j] ){

                solve2(i,j,c);
                ans++;
             }

        }
    }
}
void pr(char c){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
             if(mx[i][j]==c    && !mb[i][j] ){

                solve(i,j,c);
                ans2++;
             }

        }
    }}
main(){

  ios_base::sync_with_stdio(); cin.tie(0);
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        cin>>mx[i][j];
        mx2[i][j]=mx[i][j];
         if(mx[i][j]=='G'){
            mx2[i][j]='R';
         }

        }
    }

    pr('R');
    pr('B');
    pr('G');
    memset(mb,false,sizeof(mb));
    pr2('R');
    pr2('B');
   cout<<ans2<<" "<<ans;



}
