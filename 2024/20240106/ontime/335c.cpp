#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll N, Q;
    cin >> N >> Q;
    vector<ll> x(0);
    vector<ll> y(0);
    for(ll i=1; i<=N; i++){
        x.push_back(i);
        y.push_back(0);
    }
    ll q;
    char dir;
    ll head_x;
    ll head_y;
    ll p;
    for(ll i=0; i<Q; i++){
        cin >> q;
        if(q == 1){
            cin >> dir;
            head_x = x[0];
            head_y = y[0];
            if(dir == 'R'){
                x.insert(x.begin(), head_x+1);
                y.insert(y.begin(), head_y);
            }else if(dir == 'L'){
                x.insert(x.begin(), head_x-1);
                y.insert(y.begin(), head_y);
            }else if(dir == 'U'){
                x.insert(x.begin(), head_x);
                y.insert(y.begin(), head_y+1);
            }else if(dir == 'D'){
                x.insert(x.begin(), head_x);
                y.insert(y.begin(), head_y-1);
            }
        }else if(q == 2){
            cin >> p;
            printf("%lld %lld\n", x[p-1], y[p-1]);
        }
    }

    return 0;
}