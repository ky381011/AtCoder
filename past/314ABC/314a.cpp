#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll N;
    cin >> N;
    string f = "1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    cout << "3.";
    for(ll i=0; i<N; i++){
        cout << f[i];
    }
    cout << endl;
    return 0;
}