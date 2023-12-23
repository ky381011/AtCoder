#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll A, M, L, R;
    cin >> A >> M >> L >> R;

    if((ll)((L-A)%M!=0)) L += M-(max(L, A)-min(L,A))%M;
    if((ll)((R-A)%M!=0)) R -= (max(R, A)-min(R,A))%M;
    ll out = (R-L) / M + 1;
    //cout << L << " " << R << endl;
    if(R>=L)
        cout << out << endl;
    else cout << 0 << endl;

    return 0;
}