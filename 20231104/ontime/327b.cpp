#include <bits/stdc++.h>

using namespace std;

long xx(long n){
    long out=1;
    for(int i=1; i<=n; i++){
        out *= n;
    }
    return out;
}

int main(){
    long B;
    long temp=0;
    cin >> B;
    int i=0;
    while(B>temp){
        i++;
        temp = xx(i);
    }
    if(B==temp)
        cout << i << endl;
    else
        cout << -1 << endl;
}