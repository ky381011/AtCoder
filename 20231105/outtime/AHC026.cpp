#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int l = n/m;
    vector<vector<int>> b(m, vector<int>(l));
    for(int i=0; i<m; i++){
        for(int j=0; j<l; j++){
            cin >> b[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=0; j<m; j++){
            for(int k=0; k<b[j].size(); k++){
                if(b[j][k] == i){               
                     for(int l=1; l<=b[j].size()-k-1; l++){
                        b[9-j].push_back(b[j][k+l]);
                     }
                     for(int l=1; l<=b[j].size()-k-1; l++){
                        b[j].erase(b[j].end()-1);
                     }
                     cout << i << " " << 9-j << endl;
                     cout << i << " 0" << endl;
                }
            }
        }
    }
}