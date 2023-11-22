#include <bits/stdc++.h>

using namespace std;

int main(){
    long N;
    
    cin >> N;
    int check;

    do{
        if(N%2==0){
            N /= 2;
        } else {
            check += 1;
        }
    } while (check == 0);

    do{
        if(N%3==0){
            N /= 3;
        } else {
            check += 1;
        }
    } while (check == 1);

    if(N==1)
        cout << "Yes\n";
    else
        cout << "No\n";
}