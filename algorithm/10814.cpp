#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

struct Person{
    vector<string> name;

    void show(int age){
        for(auto it = name.begin(); it !=name.end(); it++){
            cout << age << " " << *it << "\n";
        }
    }
};

int main(){
    int n; scanf("%d", &n);
    int age; string s;
    vector<Person> v(201);

    for(int i=0;i<n;i++){
        scanf("%d", &age);
        cin >> s;
        v[age].name.push_back(s);
    }
    for(int i=0;i<201;i++){
        v[i].show(i);
    }
}
