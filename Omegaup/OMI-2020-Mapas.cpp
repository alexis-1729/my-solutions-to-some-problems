#include <bits/stdc++.h>

using namespace std;
#define lli long long int
   const int MAXN=500; int n;char mp1[2][MAXN][MAXN],mp2[MAXN][MAXN];
   bool iguales(){
          for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(mp1[0][i][j]!=mp2[i][j])
                return false;
              }
            }
            return true;
   }
   void rotar90(){
        for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
           mp1[1][j][(n-i)+1]=mp1[0][i][j];

    }
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
         mp1[0][i][j]=mp1[1][i][j];

   }
   void vert(){
        for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                       mp1[1][i][j]=mp1[0][(n-i)+1][j];
                }
             }
             for(int i=1;i<=n;i++)
             for(int j=1;j<=n;j++){
                mp1[0][i][j]=mp1[1][i][j];
             }

   }
void hort(){
     for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                       mp1[1][i][j]=mp1[0][i][(n-j)+1];
                }
             }
             for(int i=1;i<=n;i++)
             for(int j=1;j<=n;j++){
                mp1[0][i][j]=mp1[1][i][j];
             }

}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
        cin>>n;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            cin>>mp1[0][i][j];

          for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            cin>>mp2[i][j];

            iguales();

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){

                if(iguales()){
                    cout<<"IGUALES"; return 0;
                }
                hort();

            }
            vert();
        }

        rotar90();
    }

    cout<<"DIFERENTES";

}
