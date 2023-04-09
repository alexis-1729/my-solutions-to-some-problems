#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
     int t,q;
     string p;
     cin>>t>>q>>p;
       vector<int>pr(t+1,0),point(t+1);
       pr[0]=pr[1]=0; int c=0;
      for(int i=1;i<t;i++){
              if(p[i]==p[i-1])
              {
                  c++;
                  if(c==1){
                    point[i]=1;
                  }
                  //cout<<i<<" "<<pr[i]<<"\n";
                  pr[i+1]=pr[i]+1;
              }else{
                  c=0;
                  point[i]=-1;
                pr[i+1]=pr[i];
              }
      }
      //cout<<"\n";
      point[t]=-1;
       while(q--){
          int l,r;cin>>l>>r;
           /* if(point[l]==-1){
                cout<<pr[r]-pr[l]<<"\n";
            }else{
             cout<<pr[r]-pr[l-1]<<"\n";
            }*/
  cout<<pr[r]-pr[l]<<"\n";


       }

      /* cout<<"\n";
       for(int i=0;i<=t;i++)cout<<point[i]<<" ";*/

}
