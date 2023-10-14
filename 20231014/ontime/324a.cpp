#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    
    cin >> N;

    vector<string> A(N);

    for(int i=0; i<N; i++){
        cin >> A[i];
    }

    int check = 0;
    
    for(int i=1; i<N; i++){
        if(A[i] != A[i-1]){
            check = 1;
        }
    }
    

    if(check==0)
        cout << "Yes\n";
    else 
        cout << "No\n";

}