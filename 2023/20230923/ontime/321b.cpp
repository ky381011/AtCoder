#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, X;
    
    cin  >> N >> X;

    vector<int> A(N-1);

    for (int i = 0; i < N-1; i++) {
        cin >> A[i];
    }

    int min = 100, max = 0;

    for (int i = 0; i < N-1; i++) {
        if ( min > A[i])
            min = A[i];
    }
    for (int i = 0; i < N-1; i++) {
        if ( max < A[i])
            max = A[i];
    }

    if ( N != 3){
        int temp = 0;
        for (int i = 0; i < N-1; i++) {
            temp += A[i];
        }
        temp = temp - (min + max);

        if ((temp + max) < X)
            cout << -1;
        else if ((temp + min) >= X)
            cout << 0;
        else 
            cout << X - temp;

        cout << "\n"; 
    } else if ( N == 3){
        if (max < X)
            cout << -1;
        else if (min >= X)
            cout << 0;
        else 
            cout << X;

        cout << "\n";
    }
}