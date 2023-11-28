#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N), B(N), C(N), D(N);
    for(int i=0; i<N; i++){
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }
    vector<vector<int>> P(100, vector<int>(100));
    for(int i=0; i<N; i++){
        for(int j=A[i]; j<B[i]; j++){
            for(int k=C[i]; k<D[i]; k++){
                P[j][k]++;
            }
        }
    }
    int S=0;
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(P[i][j] != 0)
                S++;
        }
    }
    cout << S << endl;
    return 0;
}