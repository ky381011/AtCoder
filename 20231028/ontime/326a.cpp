#include <bits/stdc++.h>

using namespace std;

int main(){
    int X, Y;
    cin >> X >> Y;
    if(Y-2<=X && X<=Y+3)
        cout << "Yes\n";
    else 
        cout << "No\n";
}