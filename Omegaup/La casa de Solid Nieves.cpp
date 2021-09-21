#include <bits/stdc++.h>

using namespace std;
#define ll long
const int maxn=502;
int p,f,c;
int ma[maxn][maxn]; int ci[maxn];
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>p>>f>>c;
    for(int i=0;i<f;i++){
        cin>>ci[i];
    }
     memset(ma,1e9+7,sizeof(ma));
   for(int i=0;i<c;i++){
    int a,b,c;cin>>a>>b>>c;
         ma[a][b]=c;
         ma[b][a]=c;
   }
    for(int i=1;i<=p;i++)ma[i][i]=0;


    for(int k=1;k<=p;k++){
        for(int i=1;i<=p;i++){
            for(int j=1;j<=p;j++){
                ma[i][j]=min(ma[i][j],ma[i][k]+ma[k][j]);
            }
        }
    }
     int ansci,ansc=INT_MAX;int sum=0;
     for(int i=1;i<=p;i++){
            sum=0;
            for(int j=0;j<f;j++){
                   if( i!=ci[j] ){
                    sum+=ma[i][ci[j]];
                   }
            }
            if(sum<ansc){
                ansc=sum;ansci=i;
            }
     }

  cout<<ansci;

}
