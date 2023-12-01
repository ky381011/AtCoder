#include <bits/stdc++.h>

using namespace std;

int main(){
    string  S;
    cin >> S;
    int l = S.length();
    for(int i=0; i<l; i++){
        if(S[i] != 'a' && S[i] != 'u' && S[i] != 'i' && S[i] != 'e' && S[i] != 'o'){
            cout << S[i];
        }
    }
    cout << endl;

    return 0;
}