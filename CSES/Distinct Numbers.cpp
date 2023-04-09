#include <bits/stdc++.h>
 
using namespace std;
#define ios ios_base::sync_with_stdio(0); cin.tie(0);
int n;long long int vx[200001];
 main()
{
    ios
    cin>>n;
      for(int i=0;i<n;i++)cin>>vx[i];
 
      sort(vx,vx+n);
      int c=1;
      for(int i=0;i<n-1;i++){
 
        if(vx[i]!=vx[i+1])c++;
      }
 
      cout<<c;
}
