#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn=1e6+2;

main(){
ios_base::sync_with_stdio(); cin.tie(0);
int n;
cin>>n;
vector<int>vx(n);
for(int i=0;i<n;i++)
    cin>>vx[i];

 stack<int>st;   int ans[n];
  for(int i=0;i<n;i++){
      while(!st.empty()  && vx[i]>vx[st.top()]){
            ans[st.top()]=vx[i];
            st.pop();
  }

       ans[i]=-1;


      st.push(i);
  }


  for(int i:ans)cout<<i<<" ";

}
