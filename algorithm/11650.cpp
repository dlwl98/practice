#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

struct Y{
    vector<int> dot;
    int tmp = 0;
    void sortY(){
        sort(dot.begin(), dot.end());
    }
    void show(int x){
        for(auto it = dot.begin(); it !=dot.end(); it++){
            cout <<  x << " " << *it << "\n";
        }
    }
};

int main(){
    int n; scanf("%d", &n);
    int x; int y;
    Y dots[200001];

    for(int i=0;i<n;i++){
        scanf("%d", &x);
        scanf("%d", &y);
        if(dots[x + 100000].tmp == 0) dots[x + 100000].tmp = 1;
        dots[x + 100000].dot.push_back(y);
    }
    for(int i=0;i<200001;i++){
        if(dots[i].tmp == 1){
            dots[i].sortY();
            dots[i].show(i-100000);
        }
    }
}