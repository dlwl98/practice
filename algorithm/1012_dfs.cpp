#include <bits/stdc++.h>
using namespace std;

int n; int m; int command;
int field[51][51] = {0,};
int check[51][51] = {0,};
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};

void dfs(int x, int y){
    check[x][y] = 1;
    for(int i=0; i<4; i++){
        int X = x + dx[i];
        int Y = y + dy[i];
        if(X>=0 && X<n && Y>=0 && Y<m){
            if(field[X][Y]){
                if(!check[X][Y]){
                    dfs(X,Y);
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;
    while(T--){
        cin >> m >> n >> command;
        int x; int y;
        int cnt = 0;
        for(int i=0; i<command; i++){
            cin >> x >> y;
            field[y][x] = 1;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(field[i][j]){
                    if(!check[i][j]){
                        cnt++;
                        dfs(i,j);
                    }
                }
            }
        }
        cout << cnt << "\n";
        memset(field,0,sizeof(field));
        memset(check,0,sizeof(check));
    }
}