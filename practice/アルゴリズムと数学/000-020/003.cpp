#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    int out = 0;
    for(int i=0; i<N; i++){
        cin >> A[i];
        out += A[i];
    }

    cout << out << endl;

    return 0;
}