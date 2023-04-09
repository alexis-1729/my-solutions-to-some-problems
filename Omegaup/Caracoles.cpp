#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e5;
vector < int > arbol [maxn], prof; int ans = 0;
void DFS (int node ){

    for( int u: arbol[node]){

        DFS(u);
        ans = max( ans, prof[node] + prof[u] + 1);
        prof[node] = max( prof[node], prof [u] + 1);
        //cout << node << " " << u << "\n";
    }


   //cout << node << " ";


}

int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);
     int n;cin >> n;

     prof.assign( n+1, 0 );

     for(int i = 0; i < n - 1; i++){
        int a, b; cin >> a >> b;
         arbol[a].push_back(b);
     }
     //cout << "\n";
     DFS(1);

    // for( int i = 1; i < (int)prof.size(); i++)cout << i << " " << prof[i] <<"\n";
     cout  << ans + 1<< "\n";

}
