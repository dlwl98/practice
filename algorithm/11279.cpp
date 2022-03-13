#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    priority_queue<int> q;

    int N;
    int com;
    cin >> N;
    while(N){
        cin >> com;
        if(com == 0 && q.empty()){
            cout << 0 << "\n";
        }
        else if(com == 0){
            cout << q.top() << "\n";
            q.pop();
        }
        else{
            q.push(com);
        }
        N--;
    }
}