#include <bits/stdc++.h>

using namespace std;
#define lli long long int
int n;  vector<lli>Prf;
int Binaria(int x, int bx ){
int a = bx, b = n + 1;
// cout << a << " " << b <<"\n";
   while(b > a + 1){
      int m = (a + b) / 2;

      if(Prf[m] - Prf[bx] <= x){
        a = m;
      }else b = m;

   }

  // cout << a << " " << b <<"\n";
   return b;

}
int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
     cin >> n;
    vector <int> A(n );
    Prf.resize(n + 1);

    for(int i = 0; i < n; i++)cin >> A[i];

    Prf[0] = 0;
    vector <lli> B(n);

    for(lli &i:B) cin >> i;
    for(int i = 1; i <= n; i++){
      Prf[i] = Prf[i - 1] + B[i - 1];
    }


   vector <int>Co(n + 1); vector <lli> V(n + 1, 0);

    for(int i = 0; i < n; i++){
        int pos = Binaria(A[i], i);
       // cout << pos << " " << i << "\n";
                // V[pos] += min(A[i] - Prf[pos - 1], Prf[pos] - Prf[i]);
                if(pos > n) pos--;

               // cout << i << " " << pos << " " << A[i] << " " << Prf[pos] <<" " << A[i] - (Prf[pos - 1] - Prf[i])<< " " <<B[pos - 1]  << "\n";
                V[pos] += min(A[i] - (Prf[pos - 1] - Prf[i]), B[pos - 1]);
            Co[i + 1] += 1, Co[pos] += -1;
           // cout << i << " " << pos << "\n";
   }

    //for(int i = 1; i <= n; i++)cout << V[i] << " ";
   int Ct = 0;
   for(int i = 0; i < n; i++){
        Ct += Co[i + 1];
        if(Ct > 0)
            V[i + 1] += B[i] * Ct;
            // cout << (Prf[i + 1] - Prf[i]) << " ";

   }
   //cout <<"\n";
   for(int i = 1; i <= n; i++)cout << V[i] << " ";

}
