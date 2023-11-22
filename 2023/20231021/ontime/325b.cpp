#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> W(N);
    vector<int> X(N);

    for(int i=0; i<N; i++){
        cin >> W[i] >> X[i];
    }

    long P[24];
    long max = 0;
    for(int i=0; i<24; i++){
        P[i] = 0;
        for(int j=0; j<N; j++){
            int t = (i + X[j]) % 24;
            if(t >= 9 && t < 18){
                P[i] += W[j];
            }
        }
        if(max < P[i]){
            max = P[i];
        }
    }

    cout << max << "\n";
}