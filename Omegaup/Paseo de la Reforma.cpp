#include <iostream>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  int n;
    cin>>n;
    int vx[n];
    for(int i=0;i<n;i++)cin>>vx[i];
     int c=1,ans=0;
    for(int i=0;i<n-1;i++){
          if(vx[i]>vx[i+1]){c++;}else{
               ans=max(ans,c);
               c=1;
          }
    }
    ans=max(ans,c);
      cout<<ans;

}
