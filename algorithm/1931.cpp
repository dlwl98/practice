#include <bits/stdc++.h>
using namespace std;

int N, t1, t2;
vector<pair<int, int>> m;
int tmp = 1;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> t1 >> t2;
        m.push_back(make_pair(t2,t1));
    }
    sort(m.begin(), m.end());
    
    int i=0;
    for(int j=1; j<m.size(); j++){
        if(m[i].first <= m[j].second){
            tmp++;
            i=j;
        }
    }
    cout << tmp;
}