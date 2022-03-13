#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> m;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first>b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    m.push_back(make_pair(3,1));
    m.push_back(make_pair(2,5));
    sort(m.begin(), m.end(), cmp);
    
    cout << m[0].first << " " << m[1].first << "\n";
}