#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    int m; cin >> m;
    int computers[n+1] = {1,1,};
    int tmp1;
    int tmp2;
    int cnt = 0;
    vector<pair<int, int>> vv;

    for(int i=0;i<m;i++){
        cin >> tmp1; cin >> tmp2;
        vv.push_back(make_pair(min(tmp1, tmp2), max(tmp1, tmp2)));
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<m;i++){
            if(computers[vv[i].first] == 1) computers[vv[i].second] = 1;
            else if(computers[vv[i].second] == 1) computers[vv[i].first] = 1;
        }
    }
    for(int i=2;i<n+1;i++){
        if(computers[i] == 1) cnt++;
    }
    cout << cnt << "\n";
}