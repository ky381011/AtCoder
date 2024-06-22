#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll N;
    cin >> N;
    ll A=0, B=0, C=0;
    ll count=0;
    for(ll i=0; i<2*N; i++){
        C = B;
        B = A;
        cin >> A;
        if(A==C){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}