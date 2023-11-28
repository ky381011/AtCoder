#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M, P;
    cin >> N >> M >> P;
    int day = M;
    int out = 0;
    while(day <= N){
        day += P;
        out++;
    }
    cout << out << endl;

    return 0;
}