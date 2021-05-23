#include<iostream>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
   int a,b;cin>>a>>b;
   int ans=1e6;
   if(abs(a-(a/b)*b)<abs(a-((a/b)+1)*(b))){
          ans=(a/b)*b;
   }else{
       ans=((a/b)+1)*b;
   }
cout<<ans<<"\n";}
}
