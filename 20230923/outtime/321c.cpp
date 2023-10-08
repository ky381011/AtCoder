#include <bits/stdc++.h>

using namespace std;

int like(int x){

    int out;
    int temp = x;
    int digit = 0;


    while (temp > 0){
        temp = temp / 10;
        digit += 1;
    }

    int temp2 = x;
    vector<int> A(digit);
    for (int i = 0; i < digit; i++){
        A[i] = temp2 % 10;
        temp2 = temp2 / 10;
    }

    int check = 0;

    for (int i = 1; i < digit; i++){
        if ( A[i] <= A[i-1])
            check += 1;
    }

    if (check == 0)
        out = 1;
    else if (check != 0)
        out = 0;
    return out;
}

int main(){
    int K;
    
    cin >> K;

    int count = 0;
    int temp = 0;
    while (count < K){
        temp += 1;
        if ( like(temp) == 1)
            count += 1;
    }

    cout << temp << "\n";
}