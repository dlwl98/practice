#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    int n; int k;
    scanf("%d", &n);
    scanf("%d", &k);

    queue<int> q;
    int tmp;
    for(int i=0;i<n;i++) q.push(i+1);

    cout << "<";
    while(q.size()){
        for(int i=0;i<k;i++){
            tmp = q.front();
            q.pop();
            if(i != k-1) q.push(tmp);
        }
        if(q.size() > 0)
            cout << tmp << ", ";
        else
            cout << tmp;
    }
    cout << ">\n";
}