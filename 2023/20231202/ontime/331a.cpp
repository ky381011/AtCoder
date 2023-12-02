#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll M, D;
    cin >> M >> D;
    ll y, m, d;
    cin >> y >> m >> d;

    ll outy, outm, outd;
    if(d == D){
        if(m == M){
            outd = 1;
            outm = 1;
            outy = y + 1;
        }else{
            outd = 1;
            outm = m + 1;
            outy = y;
        }
    }else{
        outd = d + 1;
        outm = m;
        outy = y;
    }
    printf("%d %d %d\n", outy, outm, outd);   

    return 0;
}