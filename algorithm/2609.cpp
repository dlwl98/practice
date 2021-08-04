#include <iostream>
using namespace std;

int get_m(int a, int b){
    int c;
    while(b != 0){
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int get_M(int a, int b){
    return a * b / get_m(a,b);
}

int main(){
    int a, b; cin >> a >> b;

    cout << get_m(a,b) << endl;
    cout << get_M(a,b) << endl;
}