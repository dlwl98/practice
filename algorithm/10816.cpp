#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr(20000001);
    vector<int> v;

    int N; scanf("%d", &N);
    int num;
    
    for(int i=0;i<N;i++){
        scanf("%d", &num);
        arr[num+10000000]++;
    }
    int M; scanf("%d", &M);
    
    for(int i=0;i<M;i++){
        scanf("%d", &num);
        v.push_back(arr[num+10000000]);
    }
    for(int i=0;i<M;i++){
        cout << v[i] << " ";
    }
    cout << "\n";
}