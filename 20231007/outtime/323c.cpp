#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M;
    
    cin >> N;
    cin >> M;

	vector<int> A(M);
	for (int i=0; i < M; ++i) {
		cin >> A[i];
	}
    vector<string> S(M);

    for(int i=0; i<N; i++){
        cin >> S[i];
    }
    vector<int> P(N);
    vector<vector<int>> E(N, vector<int>(M));
    for(int i=0; i<N; i++){
        int temp = i + 1;
        for(int j=0; j<M; j++){
            if(S[i][j] == u8'o'){
                temp += A[j];
            } else if(S[i][j] == u8'x'){
                E[i].push_back(A[j]);
            }
        }
        P[i] = temp;
    }

    int max=0;

    for(int i=0; i<N; i++){
        if(max<P[i]){
            max = P[i];
        }
    }

    vector<int> temp(M);
    for(int i=0; i<N; i++){
        temp = E[i];
        sort(temp.rbegin(), temp.rend());
        E[i] = temp;
    }

    vector<int> count(N);
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(P[i]<max){
                P[i] += E[i][j];
                count[i] += 1;
            }
        }
        cout << count[i] << "\n";
    }
}