#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string S;
    cin >> S;
    S.erase(S.end()-1);
    S.push_back('4');

    cout << S;
    cout << endl;
    return 0;
}