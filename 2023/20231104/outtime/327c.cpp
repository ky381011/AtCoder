#include <bits/stdc++.h>

using namespace std;

int nine(int a[9]){
    sort(a, a+9);
    int out=0;
    for(int i=0; i<9; i++){
        if(a[i]!=i+1){
            out = 1;
            break;
        }
    }
    return out;
}

int main(){
    int A[9][9]; //row
    for(int i=0; i<9; i++){
        cin >> A[i][0] >> A[i][1] >> A[i][2] >> A[i][3] >> A[i][4] >> A[i][5] >> A[i][6] >> A[i][7] >> A[i][8];
    }

    int C[9][9]; //column
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            C[i][j] = A[j][i];
        }
    }

    int S[9][9]; //square
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            S[i][j] = A[(i/3)*3+(j/3)][(i%3)*3+(j%3)];
        }
    }
    int check=0;
    for(int i=0; i<9; i++){
        check += nine(A[i]);
        check += nine(C[i]);
        check += nine(S[i]);
    }
    if(check == 0)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
}