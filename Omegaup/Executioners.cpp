#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
     int n; cin >> n;
     vector<int> v(n + 1);
     for(int  i = 1; i <= n; i++) cin >> v[ i ];

     stack<int> st;

     for(int i = 1; i <= n; i++){
        while(!st.empty() && i - st.top() <= v[i]){
          //cout << i << " " << st.top() << " " << v[st.top()] << "\n";

            st.pop();
        }

        st.push(i);
     }

  cout << (int)st.size();
}
