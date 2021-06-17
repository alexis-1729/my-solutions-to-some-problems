#include <iostream>

using namespace std;
int n,h;bool no=false;int x;
 main()
{
ios_base::sync_with_stdio(0);cin.tie(0);
 cin>>n>>h;
 int vx[n];
  for(int i=0;i<n;i++){
    cin>>vx[i];
  }
   int j=0;
    do{
      cin>>x;
      if(x==1 && j>0)
      {
          j--;
      }else
      if(x==2 && j<n-1){
        j++;
      }else
      if(x==3 && vx[j]>0 &&(!no)){
          vx[j]=vx[j]-1; no=true;
      }else
      if(x==4 && vx[j]<h  &&(no))
      {
          no=false;
          vx[j]=vx[j]+1;
      }

   }while(x!=0);

   for(int i=0;i<n;i++){
        cout<<vx[i]<<" ";}



}
