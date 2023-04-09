#include <bits/stdc++.h>
 
using namespace std;
const int maxn=2e5; long long int vx[maxn];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin.tie(0);
    long long int n;
      cin>>n;
     for(int i=0;i<n;i++)cin>>vx[i];
     sort(vx,vx+n);
             long long int  sum=0;
            for(int i=0;i<n;i++)
            {
                if(vx[i]>sum+1){
                    cout<<sum+1;return 0;
                }
                sum+=vx[i];
 
            }
        cout<<sum+1;
 
 
}
