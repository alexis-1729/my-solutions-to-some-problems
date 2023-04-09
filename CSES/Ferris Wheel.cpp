  #include <bits/stdc++.h>
 
    using namespace std;
    #define lli long long int
    const int maxn=2e5;
    int n; lli vx[maxn],x;
    int main()
    {
        ios_base::sync_with_stdio(0);cin.tie(0);
          cin>>n>>x;
          for(int i=0;i<n;i++)cin>>vx[i];
          sort(vx,vx+n);
          int ans=0;
          for(int i=0,j=n-1;i<j;){
                  while(i<j&&vx[i]+vx[j]>x)
                        --j;
                      if(i>=j)break; //cout<<j<<"\n";
 
                  ++ans;
                  ++i;--j;//cout<<j<<"\n";
 
          }
 
    cout<<n-ans;
    }
