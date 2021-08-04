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

void push_front(int X){
    newNode = new Node();
    newNode->data = X;
    newNode->pre = NULL;
    newNode->next = head;

    if(sizee == 0){
        tail = newNode;
    }
    else{
        head->pre = newNode;
    }
    head = newNode;
    sizee++;
}

void push_back(int X){
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

int pop_front(){
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

int pop_back(){
    if(sizee == 0){
        return -1;
    }
    else{
        Node *delNode = NULL;
        Node *delNodePre = NULL;
        delNode = tail;
        delNodePre = tail->pre;
        int delNum = delNode->data;

        free(delNode);

        tail = delNodePre;
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
        if(command == "pop_back"){
            cout << pop_back() << "\n";
        }
        else if(command == "pop_front"){
            cout << pop_front() << "\n";
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
        else if(command == "push_back"){
            scanf("%d", &X);
            push_back(X);
        }
        else if(command == "push_front"){
            scanf("%d", &X);
            push_front(X);
        }
    }
}