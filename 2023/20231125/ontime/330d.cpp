#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    for(int i=0; i<N; i++){
        cin >> S[i];
    }
    vector<vector<int>> rowR(N, vector<int>(N));
    vector<vector<int>> columnR(N, vector<int>(N));
    vector<vector<int>> rowL(N, vector<int>(N));
    vector<vector<int>> columnL(N, vector<int>(N));
    for(int i=N-1; i>=0; i--){
        long count=0;
        for(int j=N-1; j>=0; j--){
            rowR[i][j] = count;
            if(S[i][j] == 'o'){
                count++;
            }
        }
    }
    for(int i=N-1; i>=0; i--){
        long count=0;
        for(int j=N-1; j>=0; j--){
            columnR[i][j] = count;
            if(S[j][i] == 'o'){
                count++;
            }
        }
    }
    for(int i=0; i<N; i++){
        long count=0;
        for(int j=0; j<N; j++){
            rowL[i][j] = count;
            if(S[i][j] == 'o'){
                count++;
            }
        }
    }
    for(int i=0; i<N; i++){
        long count=0;
        for(int j=0; j<N; j++){
            columnL[i][j] = count;
            if(S[j][i] == 'o'){
                count++;
            }
        }
    }
    long out = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(S[i][j] == 'o')
                out += (rowR[i][j] + rowL[i][j] ) * (columnR[j][i] + columnL[j][i]);
        }
    }

    cout << out << endl;

}