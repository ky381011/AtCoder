#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    
    cin >> S;

    int check = 0;

    for (int i = 0; i < 8; i++){
        if ((S[2*i+1])=='1'){
            check += 1;
        }
    }

    if (check == 0)
        cout <<"Yes\n";
    else
        cout << "No\n";
}