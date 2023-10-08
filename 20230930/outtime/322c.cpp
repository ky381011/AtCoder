#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M;
    int OUT;

    cin  >> N >> M;
	vector<int> A(N);
	for (int i = 0; i < M; i++) {
		cin >> A[i];
	}

    int j = 0;
    vector<int> B(N);
    for (int i = 0; i < N; i++){
        if (A[j] == i + 1){
            if (j == M - 1)
                B[i] = 0;
            else {
                j += 1;
                B[i] = 0;
            }
        }
        else {
            B[i] = A[j] - i - 1;
        }
    }
    /*cout << A[0];*/
    for (int i = 0; i < N; i++) {
        cout << B[i] << "\n";
    }
}