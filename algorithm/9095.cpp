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

    int x[12];
    x[1] = 1; x[2] = 2; x[3] = 4;

    for(int i=4;i<12;i++){
        x[i] = x[i-1] + x[i-2] + x[i-3];
    }

    int T; cin >> T;
    int command;

    for(int i=0;i<T;i++){
        cin >> command;
        cout << x[command] << "\n";
    }
}