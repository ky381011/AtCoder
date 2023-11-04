#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    string S;
    cin >> N >> S;
    int check=0;
    for(int i=0; i<N-1; i++){
        if((S[i]=='a' && S[i+1]=='b')||(S[i]=='b' && S[i+1]=='a')){
            check = 1;
            break;
        }
    }
    if(check==0){
        cout << "No\n";
    } else
        cout << "Yes\n";
}