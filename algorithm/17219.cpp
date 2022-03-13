#include <bits/stdc++.h>
using namespace std;

map<string,string> v;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N,M;
    string tmp1;
    string tmp2;
    cin>>N>>M;

    for(int i=0; i<N; i++){
        cin >> tmp1>> tmp2;
        v.insert({tmp1,tmp2});
    }

    for(int i=0; i<M; i++){
        cin >> tmp1;
        cout<<v[tmp1]<<"\n";
    }
}