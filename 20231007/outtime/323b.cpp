#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    
    cin >> N;

    vector<string> S(N);

    for(int i=0; i<N; i++){
        cin >> S[i];
    }

    vector<int> A(N);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(S[i][j]== u8'o'){
                A[i] = A[i] + 1;
            }
        }
    }

    vector<int> B(N);
    int upend = 99; //最大99勝
    int former = -1;    
    
    for(int i=0; i<N; i++){
        int temp=0;
        int mwin=-1;
        int check = 0;
        for(int j=0; j<N; j++){
            if(mwin < A[j] && A[j] < upend){
                temp = j;
                mwin = A[j];             
            } else if((A[j] == upend && former < j)){
                if(check==0){
                temp = j;
                mwin = A[j];
                check = 1;
                }
            }
        }         
        upend = A[temp];
        B[i] = temp;
        former = temp;
    }

    for(int i=0; i<N; i++){
        cout << (B[i] + 1) << " ";
    }
    cout << "\n";
}