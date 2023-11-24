#include <bits/stdc++.h>

using namespace std;

int pow(int a, int b){
    int out=1;
    for(int i=0; i<b; i++){
        out *= a;
    }
    return out;
}

int main(){
    int A, B;
    cin >> A >> B;
    cout << pow(A, B) + pow(B, A) << endl;
}