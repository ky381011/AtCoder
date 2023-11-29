#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, X, Y;
    cin >> N >> X >> Y;
    int out;
    out = (N / X) + (N / Y) - (N / lcm(X, Y));

    cout << out << endl;

    return 0;
}