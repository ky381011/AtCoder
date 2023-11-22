#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    cin >> S;
    for(int i=0; i<S.size(); i++){
        if(i != S.size() - 1)
            cout << S[i] << " ";
        else 
            cout << S[i];
    }
    cout << endl;
}