#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, M, tmp, num;
    int i, j, k;
    vector<int> list;

    cin >> N >> M;

    for(i=0;i<N;i++){
        cin >> tmp;
        list.push_back(tmp);
   }
    tmp = 0;
    for(i=0;i<N-2;i++){
        for(j=i+1;j<N-1;j++){
            for(k=j+1;k<N;k++){
                num = (list[i] + list[j] + list[k]);
                if(M >= num && num >= tmp) {
                    tmp = num;
                }
            }
        }
    }
    cout << tmp << endl;
}