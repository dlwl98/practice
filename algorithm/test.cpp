#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int score;
    Student(string name, int score){
        this->name = name;
        this->score = score;
    }
    bool operator <(Student &a){
        return score < a.score;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    Student students[] = {
        Student("이진욱", 90),
        Student("이정욱", 95),
        Student("이짐욱", 92),
        Student("이종욱", 91),
        Student("이좀욱", 94)
    };
    sort(students, students + 5);
    for(int i=0; i<5; i++){
        cout << students[i].name << ' ';
    }
}