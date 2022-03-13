#include <bits/stdc++.h>
using namespace std;

int N, com;
multiset<int> s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> com;
        if(com == 0 && s.size() != 0){
            cout << *s.begin() << "\n";
            s.erase(s.begin());
        }
        else if(com == 0){
            cout << 0 << "\n";
        }
        else{
            s.insert(com);
        }
    }
}