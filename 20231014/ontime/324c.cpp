#include <bits/stdc++.h>

using namespace std;

int del(string T, string S){
    int t = T.length();
    int s = S.length();
    string temp;
    int test = 0;
    for(int i=0; i<s; i++){
        int check=0;
        for(int j=0; j<t+1; j++){
            temp[j] = S[j];
        }
        temp.erase(i, 1);
        for(int k=0; k<t; k++){
            if(T[k]==temp[k]){
                check += 1;
            }
        }
        if(check == t){
            test = 1;
            break;
        }
    }
    return test;
    

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
        }
    }

    cout << "\n";
}