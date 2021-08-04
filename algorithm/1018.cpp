#include <iostream>
using namespace std;

int main(){
    int M, N, i, j, I, J;
    int result1 = 10000;
    int tmp = 0;
    int result2 = 10000;
    int result;
    string s1 = "BW";
    string s2 = "WB";
    string board[100];

    cin >> N >> M;
    int MM = M-7;
    int NN = N-7;

    for(int k=0;k<N;k++) cin >> board[k];

    for(j=0;j<NN;j++){
        for(i=0;i<MM;i++){
            tmp = 0;
            for(J=j;J<j+8;J++){
                for(I=i;I<i+8;I++){
                    if(board[J][I] != s1[(I+J)%2]){
                        tmp++;
                    }
                }
            }
            if(tmp < result1) result1 = tmp;
        }
    }
    for(j=0;j<NN;j++){
        for(i=0;i<MM;i++){
            tmp = 0;
            for(J=j;J<j+8;J++){
                for(I=i;I<i+8;I++){
                    if(board[J][I] != s2[(I+J)%2]){
                        tmp++;
                    }
                }
            }
            if(tmp < result2) result2 = tmp;
        }
    }
    if(result1 >= result2) result = result2;
    else result = result1;

    cout << result << endl;
}