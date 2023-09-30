#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    string S;
    int OUT;

    cin  >> N;
    cin  >> S; 

    int check = 0;

    while (check == 0){
        for (int i = 0; i < N-2; i++){
            if ( (S[i] == 'A') && (S[i+1] == 'B') && (S[i+2] == 'C')){
                if (check == 0){
                    cout << i+1;
                    check += 1;
                }
            }
        }

        if (check == 0){
            cout << -1;
            check += 1;
        }
    }    cout << "\n";
}