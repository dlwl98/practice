#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N; int M; cin >> N; cin >> M;
    map<string, int> m1;
    map<string, int> m2;
    string s;
    int cnt = 0;

    for(int i=0;i<N;i++){
        cin >> s;
        m1[s] = i;
    }
    for(int i=0;i<M;i++){
        cin >> s;
        if(m1.find(s) != m1.end()){
            cnt++;
            m2[s] = i;
        }
    }
    cout << cnt << "\n";
    for(auto iter=m2.begin();iter!=m2.end();iter++){
        cout << iter->first << "\n";
    }
}