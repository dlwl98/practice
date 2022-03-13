#include <bits/stdc++.h>
using namespace std;

int tmp = 0;
string num;
vector<string> v;

void zero(){
    if(num[0] == '0' && num.size() > 1){
       num = num.erase(0,1);
       zero();
    }
}

bool cmp(string a, string b){
    if(a.size() == b.size()) return a<b;
    else return a.size() < b.size();
}

void cal(string s){
    for(int i=0; i<s.size(); i++){
        if(tmp == 0){
            if ((s[i] > 96 && s[i] < 123)){
                continue;
            }
            else{
                tmp = 1;
                num = s.substr(i,1);
            }
        }
        else{
            if ((s[i] > 96 && s[i] < 123)){
                tmp = 0;
                zero();
                v.push_back(num);
            }
            else{
                num += s.substr(i,1);
            }
        }
    }
    if(tmp == 1) {
        tmp = 0;
        zero();
        v.push_back(num);
    }
}

int main(){
    int M;
    string s;
    cin >> M;

    for(int i=0; i<M; i++){
        cin >> s;
        cal(s);
    }

    sort(v.begin(),v.end(), cmp);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << "\n";
    }
}