#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int arr[21] = {0,};

void add(int x){
    arr[x] = 1;
}

void remove(int x){
    arr[x] = 0;
}

int check(int x){
    if(arr[x] == 1) return 1;
    else return 0;
}

void toggle(int x){
    if(arr[x] == 1) arr[x] = 0;
    else arr[x] = 1;
}

void all(){
    for(int i=0;i<21;i++) arr[i] = 1;
}

void empty(){
    for(int i=0;i<21;i++) arr[i] = 0;
}

int main(){
    char command[10];
    int x;
    int m; scanf("%d", &m);

    for(int i=0;i<m;i++){
        scanf("%s", command);
        if(command[0] == 'a'){
            if(command[1] == 'd'){
                scanf("%d", &x);
                add(x);
            }
            else if(command[1] == 'l'){
                all();
            }
        }
        else if(command[0] == 'r'){
            scanf("%d", &x);
            remove(x);
        }
        else if(command[0] == 'c'){
            scanf("%d", &x);
            printf("%d\n", check(x));
        }
        else if(command[0] == 't'){
            scanf("%d", &x);
            toggle(x);
        }
        else if(command[0] == 'e'){
            empty();
        }
    }
}