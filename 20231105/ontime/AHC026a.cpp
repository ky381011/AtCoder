#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int l = n/m;
    vector<vector<int>> b(n, vector<int>(l));
    for(int i=0; i<m; i++){
        for(int j=0; j<l; j++){
            cin >> b[i][j];
        }
    }

    vector<vector<int>> c(n, vector<int>(l));
    for(int i=0; i<m; i++){
        for(int j=0; j<l; j++){
            c[i][j] = b[i][j];
        }
    }

    for(int i=0; i<8; i++){
        int temp = l - 1;
        for(int j=0; j<20; j++){
            cout << (*max_element(c[i].begin(), c[i].end())) << " 9" << endl;
            cout << c[i][temp] << " 10" << endl;
            c[i].erase(max_element(c[i].begin(), c[i].end()));
        }
    }
    for(int i=8; i<10; i++){
        int temp = l - 1;
        for(int j=0; j<20; j++){
            cout << (*max_element(c[i].begin(), c[i].end())) << " 1" << endl;
            cout << c[i][temp] << " 2" << endl;
            c[i].erase(max_element(c[i].begin(), c[i].end()));
        }
    }

    for(int i=0; i<m; i++){
        sort(b[i].begin(), b[i].end());
    }

    for(int i=1; i<=200; i++){
        for(int j=0; j<m; j++){
            for(int k=0; k<l; k++){
                if(b[j][k] == i)
                    cout << j+1 <<" 0" << endl;
            }
        }
    }

}