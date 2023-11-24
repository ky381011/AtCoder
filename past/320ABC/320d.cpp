#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<long> A(M), B(M), X(M), Y(M);
    for(int i=0; i<M; i++){
        cin >> A[i] >> B[i] >> X[i] >> Y[i];
    }
    vector<long long> OX(N), OY(N);
    vector<int> STATE(N);
    OX[0] = 0;
    OY[0] = 0;
    STATE[0] = 1;

    int left = M;
    int count = 1;
    int decided = 1;
    while(count > 0 && left > 0 && decided < N){
        count = 0;
        for(int i=0; i<M; i++){
            if(STATE[A[i] - 1] == 1 && STATE[B[i] - 1] != 1){
                OX[B[i] - 1] = OX[A[i] - 1] + X[i];
                OY[B[i] - 1] = OY[A[i] - 1] + Y[i];
                STATE[B[i] - 1] = 1;
                count++;
                decided++;
            } else if(STATE[B[i] - 1] == 1 && STATE[A[i] - 1] != 1){
                OX[A[i] - 1] = OX[B[i] - 1] - X[i];
                OY[A[i] - 1] = OY[B[i] - 1] - Y[i];
                STATE[A[i] - 1] = 1;
                count++;
                decided++;
            }
        }
        left -= count;
    }
    for(int i=0; i<N; i++){
        if(STATE[i] == 1){
            cout << OX[i] << " " << OY[i] << endl;
        } else{
            cout << "undecidable" << endl;
        }
    }

    return 0;
}