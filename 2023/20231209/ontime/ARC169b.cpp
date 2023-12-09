#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll N, S;
    cin >> N >> S;
    vector<ll> A(N);

    for(ll i=0; i<N; i++){
        cin >> A[i];
    }
    
    vector<ll> B(N);
    B[0]= 1;
    ll temp = A[0];
    for(ll i=1; i<N; i++){
        if(temp + A[i] > S){
            B[i] = B[i-1] + 1;
            temp = A[i];
        }else{
            B[i] = B[i-1];
            temp += A[i];
        }
    }
    for(ll i=0; i<N; i++){
        cout << B[i];
    }
    cout << endl;
    
/*
    ll count = 0; 
    for(ll i=0; i<N; i++){
        ll temp = A[i];
        ll min_temp = 1;
        for(ll j=i; j<N; j++){
            if(j>i){
                if(temp + A[j] > S){
                    min_temp++;
                    temp = A[j];
                }else{
                    temp += A[j];
                }
            }
            count += min_temp;
        }
    }
    cout << count << endl;
*/
    return 0;
}