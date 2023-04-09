#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
const int mod=1e9+7;
const int maxn=1e6+1;
int n; int vx[maxn];
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)cin>>vx[i];
 
    set<int>st; int ans=0;
    for(int l=0,r=-1;l<n;l++){
            while(r<n-1 && !st.count(vx[r+1]))
                   st.insert(vx[++r]);
 
            ans=max(ans,(r-l)+1);
        st.erase(vx[l]);
 
    }
cout<<ans;
 
 
}
