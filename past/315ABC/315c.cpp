#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll N; 
    cin >> N;
    vector<vector<ll>> FS(N+1, vector<ll>(0));
    for(ll i=0; i<N; i++){
        ll tempF, tempS;
        cin >> tempF >> tempS;
        FS[tempF].push_back(tempS);
    }

    ll same=0;
    vector<ll> best(0);
    for(ll i=1; i<=N; i++){
        sort(FS[i].rbegin(), FS[i].rend());
        if(FS[i].size() >= 2){
            same = max(same, FS[i][0] + FS[i][1]/2);
        }
        if(FS[i].size() >= 1){
            best.push_back(FS[i][0]);
        }
    }
    ll out = same;
    sort(best.rbegin(), best.rend());
    if(best.size() >= 2){
        out = max(out, best[0] + best[1]);
    }    
    cout << out << endl;


    return 0;
}