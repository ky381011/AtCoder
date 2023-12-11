#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll N, S, K;
    cin >> N >> S >> K;
    vector<ll> P(N), Q(N);
    ll sum = 0;
    for(ll i=0; i<N; i++){
        cin >> P[i] >> Q[i];
        sum += P[i] * Q[i];
    }
    
    if(sum < S) sum += K;

    cout << sum << endl;

    return 0;
}