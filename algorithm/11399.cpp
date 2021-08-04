#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    int num;
    vector<int> v;

    for(int i=0;i<n;i++){
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());

    num = 0;
    for(int i=0;i<n;i++){
        num = num + v[i] * (n-i);
    }
    cout << num << "\n";
}