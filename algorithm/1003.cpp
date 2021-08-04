#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;

int a0[41] = {0,};
int a1[41] = {0,};

int main(){
    int T; scanf("%d", &T);
    int num;

    a0[0] = 1;
    a1[0] = 0;
    a0[1] = 0;
    a1[1] = 1;

    for(int i=2;i<41;i++){
        a0[i] = a1[i-1];
        a1[i] = a0[i] + a0[i-1];
    }

    for(int i=0;i<T;i++){
        scanf("%d", &num); 
        printf("%d %d\n", a0[num], a1[num]);
    }
}