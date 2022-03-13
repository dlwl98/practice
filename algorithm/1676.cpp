#include <bits/stdc++.h>
using namespace std;

int tmp[10] = {0,};

int zero(int a){
    if(!(a % 2)){
        return 2;
    }
    else if (!(a % 5)){
        return 5;
    }
    else return 0;
}

void cal(int a){
    if(zero(a)){
        tmp[zero(a)]++;
        cal(a / zero(a));
    }
}

int main(){
    int N;
    cin >> N;
    for(int i=0; i<N+1; i++){
        if(i == 0) continue;
        cal(i);
    }
    cout << min(tmp[2], tmp[5]);
}