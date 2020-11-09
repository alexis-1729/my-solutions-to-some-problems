#include <bits/stdc++.h>
using namespace std;
#define maxn 100
#define maxm 2000
#define maxr 100
#define maxw 10000
int carros[maxr];
int peso[maxw];
int space[maxw];
bool ocupado[maxn];
int primero = 0;
deque<int> dc;
int venta = 0;
int main()
{
    int n,m;
    cin>>n>>m;
    assert(1 <= n && n <= maxn);
    assert(1 <= m && m <= maxm);
    for (int i = 0; i < n; i++)
       {
        cin >> carros[i];
        assert(1 <= carros[i] && carros[i] <= maxr);
        ocupado[i] = false;}
    for (int i = 0; i < m; i++)
         {
        cin >> peso[i];
        assert(1 <= peso[i] && peso[i] <= maxw);
        space[i] = -1;}
    for (int i = 0; i < (m * 2); i++)
    {
        int x;
        cin >> x;
        if (x > 0){
            x--;
        dc.push_back(x);}
        else
        {
            x = -1 - x;
            assert(space[x] >= 0);
            int t = space[x];
            ocupado[t] = false;
            space[x] = -2;
            if (t < primero)
                primero = t;}
        while (primero < n && !dc.empty())
        {
            assert(ocupado[primero] == false);
            venta += peso[dc.front()] * carros[primero];
            ocupado[primero] = true;
            space[dc.front()] = primero;
            dc.pop_front();
            while (primero < n && ocupado[primero])
                primero++;
        }
    }
    cout <<venta<<"\n";

    return 0;
}
