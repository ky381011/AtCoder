#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    int out = 0;
    for(int i=0; i<N; i++){
        cin >> a[i];
        out += a[i];
    }

    cout << out % 100 << endl;

    return 0;
}