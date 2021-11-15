#include <bits/stdc++.h>

using namespace std;
#define lli long long int
 main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,k;cin>>n>>k;
    vector<lli>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    deque<int>dq;
     for(int i=0;i<k;i++){
           while(!dq.empty() && v[i]>v[dq.back()])dq.pop_back();
        dq.push_back(i);
        if(i<k-1)
        cout<<v[dq.front()]<<" ";
     }
    vector<lli>ans;
       for(int i=k;i<n;i++){
            ans.push_back(v[dq.front()]);
       if(!dq.empty() && dq.front()<=i-k)dq.pop_front();
      while(!dq.empty() && v[i]>=v[dq.back()])dq.pop_back();

        dq.push_back(i);

       }
     ans.push_back(v[dq.front()]);


     for(lli i:ans)cout<<i<<" ";
}
