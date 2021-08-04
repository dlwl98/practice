#include <iostream>
#include <string>
using namespace std;

string judge(int n){
    string nTos = to_string(n);
    int size = nTos.size();
    for(int i=0;i<size/2;i++){
        if(nTos[i] != nTos[size-1 - i]) return "no";
    }
    return "yes";
}

int main(){
    int n;
    while(1){
        cin >> n;
        if(n == 0) break;
        else cout << judge(n) << endl;
    }
}