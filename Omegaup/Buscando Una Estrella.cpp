#include <bits/stdc++.h>

using namespace std;
#define ll long long int
char pa;
ll x,n,ma,ma1,ma2,ma3;
priority_queue<ll>pc2;
int main()
{
    cin>>n;
    while(n--){
        cin>>pa;
        if(pa=='R'){
            cin>>x;
             pc2.push(x*-1);
        }else
        if(pa=='S'){
            if(pc2.size()>=3){
                     ma1=pc2.top();
                        pc2.pop();
                         ma2=pc2.top();
                        pc2.pop();
                         ma3=pc2.top();
                        pc2.pop();
                         cout<<ma1*-1<<" "<<ma2*-1<<" "<<ma3*-1<<"\n";
                    pc2.push(ma1);
                    pc2.push(ma2);
                    pc2.push(ma3);
            }
            else
            cout<<"NO HAY SUFICIENTES PUNTAJES"<<"\n";
        }else
        if(pa=='B'){
                if(!pc2.empty()){
            pc2.pop();
            }
        }
    }

    if(!pc2.empty()){
            while(!pc2.empty()){
                    pc2.pop();}
                    ma=pc2.top();
                    ma=ma*-1;
    cout<<"EL PUNTAJE MAS ALTO FUE "<<ma<<"\n";}
    else
        cout<<"NO HUBO GANADOR"<<"\n";
    return 0;
}
