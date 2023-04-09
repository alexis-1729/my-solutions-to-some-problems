#include <bits/stdc++.h>
using namespace std;
#define lli long long int
const int maxn=2e5+1,maxx=2e5+1;
const lli inf =LLONG_MAX;
typedef pair<int, int> pi;
int n;
lli vx[maxn];
 
int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
     cin>>n;
     stack<int>st;
     for(int i=0;i<n;i++)cin>>vx[i];
 
     for(int i=0;i<n;i++){
           while(!st.empty() && vx[st.top()]>=vx[i])st.pop();
           if(st.empty())cout<<"0 ";else{
            cout<<st.top()+1<<" ";
           }
           st.push(i);
     }
}
