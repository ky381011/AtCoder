#include <bits/stdc++.h>

using namespace std;

int main(){
    long D;
    cin >> D;
    long d = sqrt(D);
    vector<long> distance(d+1);
    for(long i=0; i<=d; i++){
        long temp = sqrt(D - pow(i, 2));
        distance[i] = (abs(D - pow(temp, 2)) - pow(i, 2)) < abs(D - pow(temp+1, 2) - pow(i, 2)) ? abs(D - pow(temp, 2) - pow(i, 2)) : abs(D - pow(temp+1, 2) - pow(i, 2));
    }
    long min = distance[0];
    for(long i=1; i<=d; i++){
        if(min > distance[i])
            min = distance[i];
    }

    cout << min << endl;
}