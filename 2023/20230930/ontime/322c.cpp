#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M;
    int OUT;

    cin  >> N >> M;
    int d = 0;
	vector<int> A(M);
	for (int i { 0 }; i < M; ++i) {
		cin >> d;
		A.push_back(d);
	}

    int j = 0;
    vector<int> B(N);
    for (int i = 0; i < N; i++){
        if (A[j] = i){
            j += 1;
            B[i] = 0;
        }
        else {
            B[i] = A[j] - i;
        }
    }
    for (int i = 0; i < N; i++) {
        cout << B[i] << "\n";
    }
}