#include <bits/stdc++.h>

using namespace std;
int mr[3][3];
struct node{
   int a[9]; string p="";
};
int mov[9][9]=
{   {3,3,0,3,3,0,0,0,0},
    {3,3,3,0,0,0,0,0,0},
    {0,3,3,0,3,3,0,0,0},
    {3,0,0,3,0,0,3,0,0},
    {0,3,0,3,3,3,0,3,0},
    {0,0,3,0,0,3,0,0,3},
    {0,0,0,3,3,0,3,3,0},
    {0,0,0,0,0,0,3,3,3},
    {0,0,0,0,3,3,0,3,3}};

 bool comp(node ai){
       for(int i=0;i<9;i++){
         if((ai.a[i])%4!=0)return false;

       }
     return true;

 }
 bool vb[4][4][4][4][4][4][4][4][4];
bool valid(node ra){
return vb[ra.a[0]%4][ra.a[1]%4][ra.a[2]%4][ra.a[3]%4][ra.a[4]%4][ra.a[5]%4][ra.a[6]%4][ra.a[7]%4][ra.a[8]%4];
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    node ai;int c=0;
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>mr[i][j];
            ai.a[c++]=mr[i][j];
        }
      }
      vb[ai.a[0]%4][ai.a[1]%4][ai.a[2]%4][ai.a[3]%4][ai.a[4]%4][ai.a[5]%4][ai.a[6]%4][ai.a[7]%4][ai.a[8]%4]=true;
   queue<node>q;
   q.push({ai});
      while(!q.empty()){
         node r=q.front();
           q.pop();
          if(comp(r)){
                for(int i=0;i<(int)r.p.size();i++){
                    cout<<(int)r.p[i]-'0'<<" ";
                }
            return 0;
          }

  for(int i=0;i<9;i++){
            node v=r;
            for(int j=0;j<9;j++){
                v.a[j]+=mov[i][j];

                 }v.p+=(i+'0'+1);

            if(!valid(v)){
            vb[v.a[0]%4][v.a[1]%4][v.a[2]%4][v.a[3]%4][v.a[4]%4][v.a[5]%4][v.a[6]%4][v.a[7]%4][v.a[8]%4]=true;
            q.push(v);
            }
      }
      }
}
