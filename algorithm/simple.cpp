#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> card;
    int n;
    int tmp;
    cin>>n;
    for(int i=1;i<=n;i++) {card.push(i);}
    while(card.size()-1){
        card.pop();
        tmp = card.front();
        card.pop();
        card.push(tmp);
    }
    cout<<card.front();
    cout<<"\n한글";
}