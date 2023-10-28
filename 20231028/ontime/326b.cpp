#include <bits/stdc++.h>

using namespace std;

int check(int N){
    int a, b, c;
    a = N / 100;
    N -= a * 100;
    b = N /10;
    N -= b * 10;
    c = N;

    if(a*b == c)
        return 0;
    else
        return 1;
}

int main(){
    int N;
    cin >> N;
    int c=0;

    while(c==0){
        if(check(N)){
            N += 1;
        }
        else
            c = 1;
    }
    cout << N;
}