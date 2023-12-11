#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll N, M;
    string S;
    cin >> N >> M >> S;
    
    ll L = 0;
    ll m = M, l = L;
    for(ll i=0; i<N; i++){
        if(S[i] == '0'){
            m = M;
            l = L;
            continue;
        }else if(S[i] == '1'){
            if(m != 0){
                m--;
                continue;
            }else{
                if(l != 0){
                    l--;
                    continue;
                }else{
                    L++;
                    continue;
                }
            }
        }else{
            if(l != 0){
                    l--;
                    continue;
                }else{
                    L++;
                    continue;
                }
        }
    }
    cout << L << endl;

    return 0;
}