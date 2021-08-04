#include <iostream>
using namespace std;

int main(){
    int N, K;
    int A = 1;
    int B = 1;
    cin >> N >> K;
    for(int i=0;i<K;i++){
        A = A*(N-i);
        B = B*(i+1);
    }
    cout << A/B << endl;
}