#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<long> L(N);
    long sum;
    cin >> L[0];
    sum = L[0];
    long maxL = L[0];
    for(int i=1; i<N; i++){
        cin >> L[i];
        sum += L[i];
        if(maxL < L[i]){
            maxL = L[i];
        }
    }
    long start = max((long) sum / M,maxL);
    int check = 0;
    while(check == 0){
        long column = 1;
        long temp = L[0];
        for(int i=1; i<N; i++){
            if(temp + 1 + L[i] <= start){
                temp += 1 + L[i];
            }else{
                temp = L[i];
                column++;
            }
            if(column > M){
                break;
            }
        }
        if(column <= M){
            check++;
            cout << start;
        }else{
            start++;
        }
    }
    cout << endl;

    return 0;
}