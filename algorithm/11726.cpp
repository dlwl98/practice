#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    long sq[1001];
    sq[0] = 1;
    sq[1] = 1;
    int n; cin >> n;

    if(n == 1) cout << "1\n";
    else{
        for(int i=1; i<n; i++){
            sq[i+1] = sq[i]%10007 + sq[i-1]%10007;
        }
        cout << sq[n]%10007 << "\n";
    }    
}