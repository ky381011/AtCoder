#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll N;
    cin >> N;
    string S;
    ll count=0;
    for(ll i;i<N;i++){
        cin >> S;
        if(S[0] == 'T')
            count++;
    }
    cout << count << endl;

    return 0;
}