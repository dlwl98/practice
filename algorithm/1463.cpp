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
    
    int n; cin >> n;
    int tmp1;
    int tmp2;
    int tmp3;

    if(n == 1)
        cout << "0\n";
    else if(n == 2)
        cout << "1\n";
    else if(n == 3)
        cout << "1\n";
    else{
        int arr[n+1];
        for(int i=0;i<n+1;i++) arr[i] = 1;
        for(int i=4;i<n+1;i++){
            tmp2 = arr[i-1] + 1;
            if(i%2 == 0 && i%3 == 0 ){
                tmp1 = arr[i/3] + 1;
                tmp3 = arr[i/2] + 1;
                arr[i] = min(min(tmp1, tmp2), tmp3);
            }else if(i%3 == 0){
                tmp1 = arr[i/3] + 1;
                arr[i] = min(tmp1, tmp2);
            }else if(i%2 == 0){
                tmp1 = arr[i/2] + 1;
                arr[i] = min(tmp1, tmp2);
            }else{
                arr[i] = tmp2;
            }
        }
        cout << arr[n] << "\n";
    }
}