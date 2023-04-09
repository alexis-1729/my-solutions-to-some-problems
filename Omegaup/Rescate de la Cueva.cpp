#include <vector>
#include <stdio.h>
using namespace std;
vector <int> adj[1000000], preorden, postorden;

int timer = 1;

void DFS(int node){
      preorden[node] = timer++;

      for(int u : adj[node]){


              DFS(u);
      }
      postorden[node] = timer++;
}
int main()
{

    int n, q;
    scanf("%d%d",&n,&q);

    preorden.resize(n);

    postorden.resize(n);
    for(int i = 0; i < n-1; i++){
        int a, b;
        scanf("%d%d",&a,&b);
        adj[a-1].push_back(b-1);
    }
    DFS(0);
    while (q--){
        int a, b;
        scanf("%d%d",&a,&b);
          if( preorden [a-1] <= preorden[b-1] && preorden[b-1]  <= postorden [a-1]) printf("0\n");
          else  printf("1\n");
    }
    return 0;
}
