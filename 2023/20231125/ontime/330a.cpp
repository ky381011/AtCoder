#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, L;
    cin >> N >> L;
    vector<int> A(N);
    int out = 0;
    for(int i=0; i<N; i++){
        cin >> A[i];
        if(A[i] >= L){
            out++;
        }
    }
    cout << out << endl;


}