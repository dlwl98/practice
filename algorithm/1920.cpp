#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

void BinarySearch(int *arr, int start, int end, int searchNum){
    int mid;
    
    while(end - start >= 0){
        mid = (start+end)/2;
        
        if(arr[mid] == searchNum){
            printf("1 \n");
            return;
        }
        else if(arr[mid] > searchNum)
            end = mid - 1;
        else
            start = mid + 1;
    }
    printf("0 \n");
    return;
}

int main(){
    int n; scanf("%d", &n);
    int A[n];
    for(int i=0;i<n;i++) scanf("%d", &A[i]);
    sort(A, A+n);

    int m; scanf("%d", &m);
    int B[m];

    for(int i=0;i<m;i++) scanf("%d", &B[i]);
    for(int i=0;i<m;i++) BinarySearch(A, 0, n, B[i]);
}