#include <bits/stdc++.h>

using namespace std;

int front(int N, int M, string S, string T){
    int check = 0;

    for (int i = 0; i < N; i++){
        if ( S[i] == T[i])
            check += 1;
    }
    if (check == N)
        return 0; 
    else 
        return 2;
}

int end(int N, int M, string S, string T){
    int check = 0;

    for (int i = 0; i < N; i++){
        if ( S[N-i-1] == T[M-i-1])
            check += 1;
    }
    if (check == N)
        return 0; 
    else 
        return 1;
}

int main(){
    int N, M;
    string S, T;
    int OUT;

    cin  >> N >> M;
    cin  >> S; 
    cin  >> T;

    int f, e;

    f = front(N, M, S, T);
    e = end(N, M, S, T);

    cout << f + e << "\n";
}