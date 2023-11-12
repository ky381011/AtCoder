#include <bits/stdc++.h>

using namespace std;

int main(){
    long N, Q;
    cin >> N >> Q;
    char S[300001];
    for(int i = 1; i <= N; i++){
        cin >> S[i];
    }
    vector<long> l(N+1), r(N+1);
    for(long i=1; i<=Q; i++){
        cin >> l[i] >> r[i];
    }
    vector<long> C(0);
    C.push_back(0);
    long count = 0;
    for(long i=1; i<N; i++){
        if(S[i]==S[i+1]){
            C.push_back(i);
            count++;
        }
    }
    for(long i=1; i<=Q; i++){
        long min=0, max=0;
        for(long j=1; j<=count; j++){
            if(l[i]<=C[j]){
                min=j;
                break;
            }
            
        }
        for(long j=count; j>=1; j--){
            if(C[j]<r[i]){
                max=j;
                break;
            }
        }
        cout << max-min+1 << endl;
    }
}