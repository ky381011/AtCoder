#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll N, K;
    cin >> N >> K;
    vector<ll> A(K);
    for(ll i=0; i<K; i++){
        cin >> A[i];
    }
    ll min=0;
    if(K%2==0){
        for(ll i=0; i<K; i+=2){
            min += A[i+1] - A[i];
        }
    }else{
        ll r=0;
        ll rmax=0;
        for(ll i=0; i<K-1; i++){
            if(rmax < A[i+1] - A[i]){
                r = i;
                rmax = A[i+1] - A[i];
            }
        }
        ll l=0;
        ll lmax=0;
        for(ll i=K-1; i>0; i--){
            if(lmax < A[i] - A[i-1]){
                l = i;
                lmax = A[i] - A[i-1];
            }
        }
        if(rmax < lmax){
            A.erase(A.begin() + r);
        }else{
            A.erase(A.begin() + l);
        }
        for(ll i=0; i<K; i+=2){
            min += A[i+1] - A[i];
        }
    }
    cout << min << endl;
    return 0;
}