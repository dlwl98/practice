#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    string s;
    int T; scanf("%d", &T);
    int cnt1 = 0;
    int cnt2 = 0;
    
    for(int i=0;i<T;i++){
        cnt1 = 0; cnt2 = 0;
        cin >> s;
        if(s[0] != '(') {
            cout << "NO\n";
            continue;
        }
        else{
            for(int j=0;j<s.size();j++){
                if(s[j] == '(') cnt1++;
                else if(s[j] == ')') cnt2++;
                if(cnt1 < cnt2) break;
            }
        }
        if(s[s.size()-1] == ')' && cnt1 == cnt2) cout << "YES\n";
        else cout << "NO\n";
    }
}