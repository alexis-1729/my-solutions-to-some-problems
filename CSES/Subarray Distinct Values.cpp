#include <bits/stdc++.h>
 
using namespace std;
#define lli long long int
using pi=pair<lli,lli>;
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);
     int n,k;cin>>n>>k;
 
     vector<lli>v(n);
     for(lli &i:v)cin>>i;
     lli ans=0,dif=0;
     multiset<lli>st;
     for(int l=0,r=0;r<n;r++){
         if(st.find(v[r])==st.end())dif++; st.insert(v[r]);
            while(dif>k){
               if(st.count(v[l])==1){dif--;}
               st.erase(st.find(v[l++]));
            }
            ans+=(r-l)+1;
 
     }
     cout<<ans;
 
}
