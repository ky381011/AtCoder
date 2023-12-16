#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll N;
    cin >> N;
    vector<ll> C(0);
    vector<vector<ll>> A(N, vector<ll>(0));
    ll ctemp;
    ll atemp;
    for(ll i=0; i<N; i++){
        cin >> ctemp;
        C.push_back(ctemp);
        for(ll j=0; j<C[i]; j++){
            cin >> atemp;
            A[i].push_back(atemp);
        }
        sort(A[i].begin(), A[i].end());
    }
    ll X;
    cin >> X;
    ll K=0;
    vector<ll> B(0);
    for(ll i=0; i<N; i++){
        for(ll j=0; j<C[i]; j++){
            if(A[i][j] == X){
                if(K==0){
                    K = C[i];
                    B.clear();
                    B.push_back(i+1);
                    break;
                }else if(K!=0 && C[i] < K){
                    K = C[i];
                    B.clear();
                    B.push_back(i+1);
                    break;
                }else if(K!=0 && C[i] == K){
                    B.push_back(i+1);
                    break;
                }
            }
        }
    }

    cout << B.size() << endl;
    if(B.size() == 0){
        cout << endl;
    }else{
        for(ll i=0; i<B.size(); i++){
            cout << B[i] << " ";
        }
        cout << endl;
    }

    return 0;
}