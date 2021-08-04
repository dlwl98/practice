#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v(128);
int cnt0;
int cnt1;

int check(int x, int y, int n){
    for(int i=x;i<x+n;i++){
        for(int j=y;j<y+n;j++){
            if(v[i][j] != v[x][y]) return 0;
        }
    }
    return 1;
}

void cut(int x, int y, int n){
    if(n == 1){
        if(v[x][y] == 1) cnt1++;
        else cnt0++;
        return;
    }
    else if(check(x,y,n)){
        if(v[x][y] == 1) cnt1++;
        else cnt0++;
        return; 
    }
    else{
        cut(x,y,n/2);
        cut(x+n/2,y,n/2);
        cut(x,y+n/2,n/2);
        cut(x+n/2,y+n/2,n/2);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
     
    int n; cin >> n;
    int num;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> num;
            v[i].push_back(num);
        }
    }
    cut(0,0,n);
    cout << cnt0 << "\n";
    cout << cnt1 << "\n";
}