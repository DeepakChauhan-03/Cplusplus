#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rno;
    float gpa;
    student(string s, int r, float g){
         name=s;
         rno=r;
         gpa=g;
    }
};
int main(){
    student s1("Deepak Chauhan",107,8.7);
    cout<<s1.name<<endl<<s1.rno<<endl<<s1.gpa;
    return 0;
}