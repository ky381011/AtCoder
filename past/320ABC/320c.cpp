#include <bits/stdc++.h>

using namespace std;

int bingo(int i, string S1, string S2, string S3, int M){
    int time = -1;
    int check = 0;
    int out = 0;
    while(check<3 && time < 3 * M){
        time++;
        if(check == 0){
            if(S1[time%M] == '0' + i){
                check++;
            }
        }else if(check == 1){
            if(S2[time%M] == '0' + i){
                check++;
            }
        }else if(check == 2){
            if(S3[time%M] == '0' + i){
                check++;
            }
        }
    }
    if(check==3){
        out = time;
    }else{
        out = 3 * M;
    }
    return out;
}

int main(){
    int M;
    string S1, S2, S3;
    cin >> M >> S1 >> S2 >> S3;
    int min[10];
    int pattern[10][6];
    for(int i=0; i<10; i++){
        pattern[i][0] = bingo(i, S1, S2, S3, M);
        pattern[i][1] = bingo(i, S3, S1, S2, M);
        pattern[i][2] = bingo(i, S2, S3, S1, M);
        pattern[i][3] = bingo(i, S3, S2, S1, M);
        pattern[i][4] = bingo(i, S1, S3, S2, M);
        pattern[i][5] = bingo(i, S2, S1, S3, M);
        
        min[i] = pattern[i][0];
        for(int j=1; j<6; j++){
            if(min[i]>pattern[i][j]){
                min[i] = pattern[i][j];
            }
        }
    }

    int out=min[0];
    for(int i=1; i<10; i++){
        if(out>min[i]){
            out = min[i];
        }
    }
    cout << ((out == 3 * M) ? (-1) : out) << endl;

    return 0;
}