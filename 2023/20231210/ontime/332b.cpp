#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll K, G, M;
    cin >> K >> G >> M;

    ll g = 0, m = 0;

    for(ll i=0; i<K; i++){
        if(g == G){
            g = 0;
            continue;
        }else{
            if(m == 0){
                m = M;
                continue;
            }else{
                if(m + g >= G){
                    m -= G - g;
                    g = G;
                    continue;
                }else{
                    g += m;
                    m = 0;
                    continue;
                }
            }
        }
    }
    cout << g << " " << m << endl;

    return 0;
}