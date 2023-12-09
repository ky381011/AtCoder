#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll N;
    cin >> N;
    vector<ll> A(N+1);
    vector<ll> P(N+1);
    ll temp=0;
    for(ll i=1; i<=N; i++){
        cin >> A[i];
        temp += A[i];
    }
    for(ll i=2; i<=N; i++){
        cin >> P[i];
    }
    cout << temp << endl;



    return 0;
}