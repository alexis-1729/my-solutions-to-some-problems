#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
      int n;cin>>n;
      vector<int>v(n);
      for(int &i:v)cin>>i;
      int k;cin>>k;int c=1;
        while(v[k-1]!=0){
                //cout<<v[k-1]<<"\n";
            k=v[k-1];
            c++;
        }
      cout<<c;
}
