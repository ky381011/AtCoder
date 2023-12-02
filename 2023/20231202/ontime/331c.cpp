#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> B(N);
    for(ll i=0; i<N; i++){
        cin >> A[i];
        B[i] = A[i];
    }
    sort(B.begin(), B.end());
    ll min = B[0];
    ll max = B[N-1];
    vector<ll> sum(N);
    sum[N-1] = 0;
    ll temp = max;
    for(ll i=N-2; i>=0; i--){
        if(B[i] == B[i+1]){
            sum[i] = sum[i+1];
            temp += B[i];
        }else{
            sum[i] = temp;
            temp += B[i];
        }
    }
    vector<ll> compare(1000000);

    for(ll i=0; i<N-1; i++){
        if(B[i] == B[i+1]){
            continue;
        }else{
            compare[B[i]] = sum[i];
        }
    }
    compare[B[N-1]] = 0;

    for(ll i=0; i<N-1; i++){
        cout << compare[A[i]] << " ";
    }
    cout << compare[A[N-1]] << endl;

    return 0;
}