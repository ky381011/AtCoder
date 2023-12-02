#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll countB(ll N, vector<string> P, ll a, ll b, ll c, ll d){
    ll count = 0;
    c = (c<a) * N + c + 1;
    d = (d<b) * N + d + 1;
    for(ll i=a; i<c; i++){
        for(ll j=b; j<d; j++){
            if(P[i%N][j%N] == 'B'){
                count++;
            }
        }
    }
    return count;
}

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
    for(ll i=0; i<N; i++){//column
        for(ll j=0; j<N; j++){//row
            if(P[i][j] == 'B'){
                bsquare++;
            }
        }
    }
    //cout << countB(N, P, A[0]%N, B[0]%N, C[0]%N, D[0]%N) << endl;
    //cout << countB(N, P, A[1]%N, B[1]%N, C[1]%N, D[1]%N) << endl;

    for(ll i=0; i<Q; i++){
        ll r1=0, r2=0;
        ll b1=countB(N, P, A[i]%N, B[i]%N, (A[i]-1)%N, D[i]%N);
        ll b2=countB(N, P, A[i]%N, B[i]%N, C[i]%N, (B[i]-1)%N);
        ll b3=countB(N, P, A[i]%N, B[i]%N, C[i]%N, D[i]%N);

        r1 = ((D[i] - B[i]) / N);
        r2 = ((C[i] - A[i]) / N);

        cout << (r1 * r2 * bsquare) + (r1 * b2) + (r2 * b1) + b3 << endl;
    }

    return 0;
}