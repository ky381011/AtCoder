#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    int y[5];

    cin >> x;

    y[4] = x / 10000;
    y[3] = (x/1000)%10;
    y[2] = (x/100)%10;
    y[1] = (x/10)%10;
    y[0] = x%10;

    if (x>=10000){
        if ( y[4] > y[3] && y[3] > y[2] && y[2] > y[1] && y[1] > y[0] )
            cout << "Yes\n";
        else 
            cout << "No\n";
    }
    else if (1000<=x && x<10000){
        if ( y[3] > y[2] && y[2] > y[1] && y[1] > y[0] )
            cout << "Yes\n";
        else 
            cout << "No\n";

    }
    else if (100<=x && x<1000){
        if ( y[2] > y[1] && y[1] > y[0] )
            cout << "Yes\n";
        else 
            cout << "No\n";

    }
    else if (10<=x && x<100){
        if ( (y[1] > y[0]) )
            cout << "Yes\n";
        else 
            cout << "No\n";
    }
    else 
        cout << "Yes\n";
}