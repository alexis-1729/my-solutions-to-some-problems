#include <bits/stdc++.h>

using namespace std;

int main()
{
 ios_base::sync_with_stdio(0);cin.tie(0);
       int ao[27];
        int n;cin>>n; string p;cin>>p;
        for(int i=1;i<=26;i++)ao[i]=0;

           for(int i=0;i<n;i++){
            ao[(int)p[i]-96]++;
           }
           int mayor=0;
           int pos;
   for(int i=1;i<=26;i++){
       // cout<<ao[i]<<" ";
          if(ao[i]>mayor){
            mayor=ao[i];
            pos=i;
          }
     }
    cout<<char(pos+96);
}
