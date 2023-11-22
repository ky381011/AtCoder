#include <bits/stdc++.h>

using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    int m = 0;

    vector<string> S(H+2, "0");
    for(int i=1; i<=H; i++){
        cin >> S[i];
        S[i].insert(0, "0");
        S[i].append("0");
        for(int j=0; j<W; j++){
            if(S[i][j] == '#')
                m += 1;
        }
    }

    int S;
    vector<vector<int>> E(H, vector<int>(W));
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){

        }
    }


}