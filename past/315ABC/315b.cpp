#include <bits/stdc++.h>

using namespace std;

int main(){
    int M; 
    cin >> M;
    vector<int> D(M);
    int sum=0;
    for(int i=0; i<M; i++){
        cin >> D[i];
        sum += D[i];
    }

    int mid = (sum + 1) / 2;

    int temp = 0;
    for(int i=0; i<M; i++){
        if(temp + D[i] < mid){
            temp += D[i];
        }else{
            cout << i + 1 << " " << mid - temp;
            break;
        }
    }
    cout << endl;

    return 0;
}