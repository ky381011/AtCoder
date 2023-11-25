#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, L, R;
    cin >> N >> L >> R;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    vector<int> OUT(N);

    for(int i=0; i<N; i++){
        if(A[i] <= L)
            OUT[i] = L;
        else if(A[i] >= R)
            OUT[i] = R;
        else
            OUT[i] = A[i];
    }

    for(int i=0; i<N-1; i++){
        cout << OUT[i] << " ";
    }
    cout << OUT[N-1] << endl;
}