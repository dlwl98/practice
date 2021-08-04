#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    map<int, string> m1;
    map<string, int> m2;
    string s;
    int N; int M; cin >> N; cin >> M;
    
    for(int i=1;i<N+1;i++){
        cin >> s;
        m1[i] = s;
        m2[s] = i;
    }

    for(int i=0;i<M;i++){
        cin >> s;
        int j = s[0];
        if(j < 65){
            cout << m1[stoi(s)] << "\n";
        }
        else{
            cout << m2[s] << "\n";
        }
    }
}