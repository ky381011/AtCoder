#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string S, T;
    cin >> S >> T;

    ll checkS = min(abs(int(S[0]) - int(S[1])), 5-abs((int(S[0]) - int(S[1]))));
    ll checkT = min(abs(int(T[0]) - int(T[1])), 5-abs((int(T[0]) - int(T[1]))));

    if(checkS == checkT) cout << "Yes";
    else cout << "No";
    cout << endl;
    return 0;
}