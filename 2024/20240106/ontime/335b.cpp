#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll N;
    cin >> N;
    ll x=0, y=0, z=0;
    printf("%lld %lld %lld\n", x, y, z);
    while(x<N){
        while(x+y<N){
            while(x+y+z<N){
                z++;
                printf("%lld %lld %lld\n", x, y, z);
            }
            z=0;
            y++;
            printf("%lld %lld %lld\n", x, y, z);
            
        }
        x++;
        y=0;
        z=0;
        printf("%lld %lld %lld\n", x, y, z);
    }

    return 0;
}