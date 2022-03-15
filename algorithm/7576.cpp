#include <bits/stdc++.h>
using namespace std;

int x,y,M,N,tmp,cnt = 0,visited[1001][1001] = {0,};
queue<pair<int, int>> q;
int dx[] = {0,1,0,-1};
int dy[] = {-1,0,1,0};


void bfs(){
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for(int i=0;i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >= N|| ny < 0 || ny >= M) continue;
            if(visited[x][y] == 0){
                visited[nx][ny] = visited[x][y] + 1;
                q.push(make_pair(x,y));
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> M>> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >>visited[i][j];
            if(visited[i][j] == 1) q.push(make_pair(i,j));
        }
    }

    bfs();

    int ret = 0;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(visited[i][j] == 0){
                cout<<"-1"; return 0;
            }
            ret = max(ret,visited[i][j] - 1);
        }
    }
    cout << ret;
}