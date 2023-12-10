#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using Graph = vector<vector<ll>>;

void reverse_plus(string in){
    ll len = in.length();
    for(ll i=0; i<len; i++){
        if(in[i] == 'R')
            in.push_back('L');
        else if(in[i] == 'L')
            in.push_back('R');
        else if(in[i] == 'U')
            in.push_back('D');
        else if(in[i] == 'D')
            in.push_back('U');
    }
}

int main(){
    ll N;
    cin >> N;
    vector<string> h(N-1);
    vector<string> v(N);
    vector<string> d(N);
    for(ll i=0; i<N-1; i++){
        cin >> h[i];
    }
    for(ll i=0; i<N; i++){
        cin >> v[i];
    }
    for(ll i=0; i<N; i++){
        cin >> d[i];
    }

    vector<bool> seen(N*N);
    seen.assign(N*N, false);

    queue<ll> que;

    vector<string> root(N*N);
    root.clear();

    //initial
    seen[0] = true;
    que.push(0);

    //start
    while(!que.empty()){
        ll v = que.front();
        que.pop();
        ll x = v%N, y=v/N;
        
        //search horizonal
        if(0 < x && x < N-1){//middle
            //right
            if(h[x][y] == '0' && seen[(x+1)+y*N] == false){
                root[(x+1)+y*N] = root[x+y*N] + "R";
                que.push((x+1)+y*N);
            }
            //left
            if(h[x-1][y] == '0' && seen[(x-1)+y*N] == false){
                root[(x-1)+y*N] = root[x+y*N] + "L";
                que.push((x-1)+y*N);
            }
        }else if(x == 0){//left end
            //right
            if(h[x][y] == '0' && seen[(x+1)+y*N] == false){
                root[(x+1)+y*N] = root[x+y*N] + "R";
                que.push((x+1)+y*N);
            }
        }else if(x == N-1){//right end
            //left
            if(h[x-1][y] == '0' && seen[(x-1)+y*N] == false){
                root[(x-1)+y*N] = root[x+y*N] + "L";
                que.push((x-1)+y*N);
            }
        }

        //search vertical
        if(0 < y && y < N-1){//middle
            //down
            if(h[x][y] == '0' && seen[x+(y+1)*N] == false){
                root[x+(y+1)*N] = root[x+y*N] + "D";
                que.push(x+(y+1)*N);
            }
            //up
            if(h[x][y-1] == '0' && seen[x+(y-1)*N] == false){
                root[(x-1)+y*N] = root[x+y*N] + "U";
                que.push((x-1)+y*N);
            }
        }else if(y == 0){//up end
            //down
            if(h[x][y] == '0' && seen[x+(y+1)*N] == false){
                root[x+(y+1)*N] = root[x+y*N] + "D";
                que.push(x+(y+1)*N);
            }
        }else if(y == N-1){//down end
            //up
            if(h[x][y-1] == '0' && seen[x+(y-1)*N] == false){
                root[(x-1)+y*N] = root[x+y*N] + "U";
                que.push((x-1)+y*N);
            }
        }
    }




    return 0;
}