#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, S;
    cin >> N >> S;
    int out=0;
    for(int i=1; i<=min(N, S-1); i++){
        if(i < S){
            out += min(S - i, N);
        }
    }
    cout << out << endl;

    return 0;
}