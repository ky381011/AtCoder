#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> D(N+1);
    for(int i=1; i<=N; i++){
        cin >> D[i];
    }
    int count=0;
    for(int i=1; i<=N; i++){
        if(i<10){
            if(i<=D[i]){
                count += 1;
            }
            if(i*11<=D[i]){
                count += 1;
            }
        } else if(i>=10){
            if((i/10)==(i%10)){
                int c = i%10;
                if(c<=D[i]){
                    count += 1;
                }
                if(c*11<=D[i]){
                    count += 1;
                }
            }
        }
    }
    cout << count << endl;
}