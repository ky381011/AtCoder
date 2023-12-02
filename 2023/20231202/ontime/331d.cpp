#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll N, Q;
    cin >> N >> Q;
    vector<string> P(N);
    for(ll i=0; i<N; i++){
        cin >> P[i];
    }
    vector<ll> A(Q), B(Q), C(Q), D(Q);
    for(ll i=0; i<Q; i++){
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    ll bsquare = 0;
    vector<ll> brow(N);
    vector<ll> bcolumn(N);
    for(ll i=0; i<N; i++){//column
        for(ll j=0; j<N; j++){//row
            if(P[i][j] == 'B'){
                bsquare++;
                brow[j]++;
                bcolumn[i]++;
            }
        }
    }

    for(ll i=0; i<Q; i++){
        ll r1=0, r2=0, r3=0, r4=0;
        ll bx=C[i], by=D[i];
        while(A[i]%N != C[i]%N){
            bx += bcolumn[A[i]];
            A[i]++;
        }
        while(B[i]%N != D[i]%N){
            bx += brow[B[i]];
            B[i]++;
        }
        r1 = ((C[i] - A[i]) / N) * ((D[i] - B[i]) / N);
        r2 = ((C[i] - A[i]) / N) * by;
        r3 = bx * ((D[i] - B[i]) / N);
        r4 = bx * by;
        cout << r1 + r2 + r3 + r4 << endl;
    }

    return 0;
}