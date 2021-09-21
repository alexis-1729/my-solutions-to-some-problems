#include "primo.h"
    #include <bits/stdc++.h>
    using namespace std;
    // Main
    //	int primo(int posicion)
    vector< int>vx;


    void isprime(int n) {
    vector<bool> es_primo(n+1);
    for (long long int  i = 2; i <= n; i++) {
        if (es_primo[i])continue;
        vx.push_back(i);
            for (long long int j = i * i; j <= n; j += i)
                es_primo[j] = true;

    }

    }


     int  bin( int a, int  b){
        int m;
    while(b>a+1){
             m=(a+b)/2;
           if(vx[m]==primo(m)){
              a=m+1;
           }else{
              b=m;
           }

    }
     return vx[a];
    }
    int busca(int n) {
        isprime(n);
        int a=0,b=vx.size()-1;

    while(a<b){
           int m=(a+b)/2;
           if(vx[m]==primo(m)){
              a=m+1;
           }else{
              b=m;
           }
    }
    return vx[a];
    }
