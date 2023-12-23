#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll repunit(ll n){
    ll out=0;
    for(ll i=0; i<n; i++){
        out += ll(pow(10, i));
    }
    return out;
}

int main(){
    ll N;
    cin >> N;
    // 1 4 10 20 35 56 84 120 165 220 286 364
    vector<ll> number(0);
    ll digit = 1;
    ll w2=1, w3=1;
    for(ll i=1; i<=364; i++){
        ll in = repunit(digit) + repunit(w2) + repunit(w3);
        number.push_back(in);
        if(digit == w3){
            digit++;
            w2=1;
            w3=1;
        }else{
            if(w2 == w3){
                w2++;
                w3 = 1;
            }else{
                w3++;
            }
        }
        
    }
    //printf("%lld %lld %lld\n", digit, w2, w3);
    cout << number[N-1] << endl;

    return 0;
}