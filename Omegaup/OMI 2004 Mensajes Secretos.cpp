#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn=1e4+2;
char pa[maxn];

void rev(int i,int j){
    while(i<j){
        swap(pa[i],pa[j]);i++,j--;
    }
}

main(){
ios_base::sync_with_stdio(); cin.tie(0);
      gets(pa);
      int i=0,n;
      for( i=0;pa[i]!='\0';i++)
                  n=i;

                  stack<int>st;
        for(i=0;i<=n;i++){
               if(pa[i]=='('){
                    st.push(i);
                  }else

                  if(pa[i]==')'){
                        rev(st.top(),i);
                        st.pop();
                  }
        }

        for(int i=0;i<=n;i++){
            if(pa[i]!='('  && pa[i]!=')')cout<<pa[i];
        }

}
