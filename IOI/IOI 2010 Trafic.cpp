#include "traffic.h"
#include <bits/stdc++.h>
using namespace std;
const int maxn=1e6+1;
vector<int>vx[maxn];
bool vb[maxn];

 int pi[maxn],pp[maxn],nd[maxn];int sf=0;
void dfs(int node,int r){
      for(int i:vx[node]){
          if(i!=r){
                dfs(i,node);
                pi[node]+=pi[i];
          pp[node]=max(pp[node],pi[i]);
          }}
       pp[node]=max(pp[node],sf-pi[node]-nd[node]);
  pi[node]+=nd[node];


}


int LocateCentre(int n, int p[], int S[], int D[]) {
    for(int i=0;i<n-1;i++){
            vx[S[i]].push_back(D[i]);
            vx[D[i]].push_back(S[i]);
    }
    for(int i=0;i<n;i++){sf+=p[i];nd[i]=p[i];}

                   dfs(0,-1);
     int sum=INT_MAX,ans=-1;
            for(int i=0;i<n;i++){

                 if(pp[i]<sum){
                    sum=pp[i];
                    ans=i;
                 }
            }

   return ans;
}




