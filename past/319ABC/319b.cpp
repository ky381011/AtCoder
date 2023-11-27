#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i=0; i<=N; i++){
        int check = 0;
        for(int j=1; j<=9; j++){
            
            if(N % j != 0){
                continue;
            }else{
                if(i % ((int) (N / j)) == 0){
                    cout << j;
                    check = 1;
                    break;
                }
            }
        }
        if(check == 0){
            cout << "-";
        }
    }
    cout << endl;
}