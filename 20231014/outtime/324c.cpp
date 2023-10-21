#include <bits/stdc++.h>

using namespace std;

int del(string T, string S){
    int t = T.length();
    int s = S.length();
    int test = 0;
    int up=0, down=0;
    for(int i=0; i<s; i++){
        if(T[i] == S[i]){
            up += 1;
        } else
            break;
    }

    for(int i=s-1; i>=0; i--){
        if(T[i-1] == S[i]){
            down += 1;
        } else
            break;
    }
    return (up+down == t);
}

int main(){
    int N;
    string T;
    cin >> N >> T;
    int t = T.length();

    vector<string> S(N);

    for(int i=0; i<N; i++){
        cin >> S[i];
    }

    for(int i=0; i<N; i++){
        int check = 0;
        int s = S[i].length();
        if(t == s){
            for(int j=0; j<t; j++){
                if(T[j]!=S[i][j])
                    check += 1;
            }
            if(check <= 1)
                cout << i+1 << " ";
        }
        if(t == s + 1){
            for(int j=0; t - 1; j++){
                if(T[j+1]!=S[i][j])
                    check += 1;
            }
            if(check <= 0)
                cout << i+1 << " ";
        }
        if(t == s - 1){
            if(del(T, S[i]) == 1)
                cout << i+1 << " ";
        } else;
    }

    cout << "\n";
}