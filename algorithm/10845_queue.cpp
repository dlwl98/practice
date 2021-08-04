#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct Node{
    int data;
    struct Node *pre;
	struct Node *next;
};

int sizee = 0;
Node *head = NULL;
Node *tail = NULL;
Node *newNode = NULL;

void push(int X){
    newNode = new Node();
    newNode->data = X;
    newNode->pre = tail;
    newNode->next = NULL;

    if(sizee == 0){
        head = newNode;
    }
    else{
        tail->next = newNode;
    }
    tail = newNode;
    sizee++;
}

int pop(){
    if(sizee == 0){
        return -1;
    }
    else{
        Node *delNode = NULL;
        Node *nextDelNode = NULL;
        delNode = head;
        nextDelNode = head->next;
        int delNum = delNode->data;

        free(delNode);

        head = nextDelNode;
        sizee--;
        return delNum;
    }
}

int front(){
    if(sizee == 0){
        return -1;
    }
    else{
        return head->data;
    }
}

int back(){
    if(sizee == 0){
        return -1;
    }
    else{
        return tail->data;
    }
}

int empty(){
    if(sizee == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    string command;
    int X;
    int N; scanf("%d", &N);

    for(int i=0;i<N;i++){
        cin >> command;
        if(command == "pop"){
            cout << pop() << "\n";
        }
        else if(command == "size"){
            cout << sizee << "\n";
        }
        else if(command == "empty"){
            cout << empty() << "\n";
        }
        else if(command == "front"){
            cout << front() << "\n";
        }
        else if(command == "back"){
            cout << back() << "\n";
        }
        else{
            scanf("%d", &X);
            push(X);
        }
    }
}