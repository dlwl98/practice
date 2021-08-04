#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int isPrimeNumber(int n){
    int i = 0;
    int last = n / 2;
    if (n <= 1){
        return 0;
    }
    for (i = 2; i <= last; i++){
        if ((n%i) == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int cnt = 0;
    int n; scanf("%d", &n);
    int num;

    for(int i=0;i<n;i++){
        scanf("%d", &num);
        if(isPrimeNumber(num)) cnt++;
    }
    cout << cnt << "\n";
}