#include <bits/stdc++.h>
using namespace std;
#define lli long long int
const int maxn=1e5+1,maxx=2e5+1;
const lli inf =LLONG_MAX;
int n;
lli vx[maxn];
int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
   cin>>n;
   for(int i=0;i<n;i++)cin>>vx[i];
    stack<lli>st; vector<lli>ans(n,0);
   for(int i=0;i<n;i++){
          while(!st.empty() && vx[st.top()]<=vx[i])
               st.pop();
            ans[i]+=i-(!st.empty()?st.top():-1);

            st.push(i);
   }
   while(!st.empty())st.pop();

      for(int i=n-1;i>=0;i--){
          while(!st.empty() && vx[st.top()]<=vx[i])
               st.pop();
            ans[i]+=(!st.empty()?st.top():n)-i;
            st.push(i);
   }

   for(int i=0;i<n;i++)cout<<ans[i]-1<<" ";
}
