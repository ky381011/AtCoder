#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N, S, M, L;
    cin >> N >> S >> M >> L;
    vector<vector<ll>> out(1009);
    for(ll i=0; i<=17; i++){
        for(ll j=0; j<=13; j++){
            for(ll k=0; k<=12; k++){
                out[6*i + 8*j + 12*k].push_back(S*i + M*j + L*k);
            }
        }
    }
    ll minout = 10000 * 17;
    for(ll i=0; i<=112; i++){
        if(out[i].size() > 0){
            sort(out[i].begin(), out[i].end());
            if(i >= N){
                minout = min(minout, out[i][0]);
            }
        }
    }
    cout << minout << endl;
    
    return 0;
}