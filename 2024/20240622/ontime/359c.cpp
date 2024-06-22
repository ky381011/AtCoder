#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll Sx, Sy, Tx, Ty;
    cin >> Sx >> Sy >> Tx >> Ty;
    if(Sx == Tx){
        cout << abs(Sy -Ty) << endl;
    }else if(Sx < Tx){
        if((Sx+Sy)%2 == 0){
            Sx++;
        }
        if((Tx+Ty)%2 == 0){
            Tx++;
        }
        if((abs(Sx-Tx))/2 > abs(Sy-Ty)){
            cout << (abs(Sx-Tx))/2 + abs(Sy-Ty) << endl;
        }else{
            cout << abs(Sy-Ty) << endl;
        }
    }else{
        ll tx, ty;
        tx = Sx;
        ty = Sy;
        Sx = Tx;
        Sy = Ty;
        Tx = tx;
        Ty = ty;
        if((Sx+Sy)%2 == 0){
            Sx++;
        }
        if((Tx+Ty)%2 == 1){
            Tx--;
        }
        if((abs(Sx-Tx))/2 > abs(Sy-Ty)){
            cout << (abs(Sx-Tx))/2 + abs(Sy-Ty) << endl;
        }else{
            cout << abs(Sy-Ty) << endl;
        }
    }

    return 0;
}