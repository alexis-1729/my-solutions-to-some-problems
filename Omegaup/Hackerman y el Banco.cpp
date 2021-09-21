#include <iostream>

using namespace std;
long long int  n;
bool f(long long int  x){
   if(x>n)return false;

    if(x==n)return true;

    return f(x*10) || f(x*20);

}
 main()
{
ios_base::sync_with_stdio(0);cin.tie(0);
 int t;
 cin>>t;
 while(t--){
    cin>>n;
      cout<<(f(1)? "Yes\n":"No\n");


 }

}
