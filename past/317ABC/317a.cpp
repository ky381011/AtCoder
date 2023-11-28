#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, H, X;
    cin >> N >> H >> X;
    vector<int> P(N);
    for(int i=0; i<N; i++){
        cin >> P[i];
    }
    int out;

    for(int i=0; i<N; i++){
        if(H + P[i] >= X){
            cout << i+1;
            break;
        }
    }
    cout << endl;

    return 0;
}