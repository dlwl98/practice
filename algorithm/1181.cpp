#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n; 
vector<string> arr;

int compare(string a, string b){
    if(a.size() == b.size()){
        return a<b;
    }
    return a.size() < b.size();
}

int main(){
    cin>>n;
    

    for(int i=0;i<n;i++){
        string tmp; cin>>tmp;
        arr.push_back(tmp);
    }
    
    sort(arr.begin(),arr.end(),compare);

    for(int i=0;i<n-1;i++){
        if(arr[i] != arr[i+1]){
            cout<<arr[i]<<"\n";
        }
    }cout<<arr[n-1];
}

// int main(){
//     int n;
//     vector<string> words;
//     string word;
//     string tmp;

//     cin >> n;

//     for(int i=0;i<n;i++){
//         cin >> word;
//         words.push_back(word);
//     }
//     sort(words.begin(),words.end());

//     for(int i=1;i<51;i++){
//         for(int j=0;j<n;j++){
//             if(words[j].size() == i){
//                 if(tmp != words[j]){
//                     cout << words[j] << endl;
//                     tmp = words[j];
//                 }
//             }
//         }
//     }
// }