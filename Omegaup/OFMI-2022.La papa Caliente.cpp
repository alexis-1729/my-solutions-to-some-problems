#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
       int a,b,c,ct=0;cin>>a>>b>>c;
    while(ct<=45){
           ct+=a;
           if(ct>=45){
            cout<<"Maeva";return 0;
           }
           ct+=b;
           if(ct>=45){
             cout<<"Lorena";return 0;
           }
         ct+=c;
         if(ct>=45){
            cout<<"Ramona";return 0;
         }
    }


}
