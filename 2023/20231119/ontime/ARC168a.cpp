#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    string S;
    cin >> N >> S;
    long out = 0;
    long temp = 0;
    S.push_back('<');
    for(int i=0; i<N; i++){
        if(S[i] == '>'){
            temp++;
        }else{
            if(temp != 0){
                out += (temp + 1) * temp / 2;
                temp = 0;
            }
        }
    }
    cout << out << endl;
}