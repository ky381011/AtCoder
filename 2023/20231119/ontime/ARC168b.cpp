#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    vector<int> A(N);
    cin >> N;
    int temp;
    for(int i=0; i<N; i++){
        cin >> temp;
        A.push_back(temp);
    }
    sort(A.begin(), A.end());
    int max = A[N-1];
    int start=1;
    int num=0;
    while(max>1){
        max /= 2;
        start *= 2;
        num++;
    }
    int c = start;
    int out;
    for(int i=0; i<num; i++){
        int t=0;
        for(int j=0; j<N; j++){
            t += (A[i] / c + 1) % 2;
            t =  t % 2;
        }
        if(t!=0){
            out = c;
            c = c / 2 + c;
        } else{
            c = c / 2;
        }
    }

    cout << out << endl;
}