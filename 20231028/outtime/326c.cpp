#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> A(N);

    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    
    int max = 0;
    for(int i=0; i<N; i++){
        int x = A[i];
        int count = max;
        for(int j=i+max; j<N; j++){
            if(A[j] < x + M)
                count += 1;
            else
                break;
        }
        if(max < count)
            max = count;
        if(i+max>=N)
            break;
    }
    cout << max << endl;
}