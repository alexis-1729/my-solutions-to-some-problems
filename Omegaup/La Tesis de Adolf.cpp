#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int maxn = 1e5+2;
int n,t;string a,b;
int main() {
 ios_base::sync_with_stdio(0);cin.tie(0);
     cin>>n>>a>>t>>b;
     int c=0;
     for(int i=0;i<n;i++){
           if(a[i]!=b[i])c++;
     }
  c==2?cout<<"Si":cout<<"No";

}
