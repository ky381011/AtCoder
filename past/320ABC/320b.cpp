#include <bits/stdc++.h>

using namespace std;

int palindrome(string S){
    int l = S.length();
    string T = S;
    int out;
    reverse(T.begin(), T.end());
    if(S==T){
        out = l;
    } else{
        out = 0;
    }
    return out;
}

int main(){
    string S;// = "AAAAAAAAAA";
    //string T = S.substr(0, 10);
    cin >> S;
    int l = S.length();
    int max=1;
    for(int i=l; i>=1; i--){
        for(int j=0; j<l-i+1; j++){
            if(palindrome(S.substr(j, i)) != 0){
                max = palindrome(S.substr(j, i));
                break;
            }
        }
        if(max != 1)
            break;
    }
    cout << max << endl;
}