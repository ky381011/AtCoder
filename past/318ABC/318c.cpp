#include <bits/stdc++.h>

using namespace std;

int main(){
    long long N, D, P;
    cin >> N >> D >> P;
    vector<long long> F(N);
    for(long long i=0; i<N; i++){
        cin >> F[i];
    }

    sort(F.begin(), F.end());
    vector<long long> sum(N);
    sum[0] = F[0];
    for(long long i=1; i<N; i++){
        sum[i] = sum[i-1] + F[i];
    }

    long long k = (N+D-1)/D;
    long long out=P*k;
    for(int i=0;i<k;i++){
        out=min(out, sum[N-1-(i*D)]+(P*i));
    }
    cout << out << endl;

    return 0;
}