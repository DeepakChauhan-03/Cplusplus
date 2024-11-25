//Encapsulation example
#include<iostream>
using namespace std;
class Student{
    private:
            string name;
            string enroll;
            char grade;
            int p;
            int c;
            int m;
            int h;
            int e;
            float per;
public:
    string getName(){     //Member Data
        return name;
    }     
    string getEnroll(){
        return enroll;
    }  
    char getGrade(){
        return grade;
    } 
    int getP(){
        return p;
    }
    int getM(){
        return m;
    }
    int getC(){
        return c;
    }
    int getH(){
        return h;
    }
    int getE(){
        return e;
    }
    float getPer(){
        return (p+c+m+h+e)/5.0;
    }
    //Getter
    void setName(string n){
        name = n;
    }
    void setEnroll(string e){
        enroll = e;
    }
    void setGrade(char g){
        grade = g;
    }
    void setP(int p){
        this->p = p;
    }
    void setM(int m){
        this->m = m;
    }
    void setC(int c){
        this->c = c;
    }
    void setH(int h){
        this->h = h;
    }
    void setE(int e){
        this->e = e;
    }
    void setPer(float per){
        per = per;
    }
};
int main(){
    Student s;
    s.setName("Deepak");
    s.setEnroll("0133CS");
    s.setGrade('B');
    s.setP(80);
    s.setC(90);
    s.setM(50);
    s.setH(70);
    s.setE(95);
    s.setPer(s.getPer());
    cout<<"\nStudents Information "<<endl;
    cout<<"Name : "<<s.getName()<<endl;
    cout<<"Enrollment : "<<s.getEnroll()<<endl;
    cout<<"P :"<<s.getP()<<endl;
    cout<<"C :"<<s.getC()<<endl;
    cout<<"M :"<<s.getM()<<endl;
    cout<<"E :"<<s.getE()<<endl;
    cout<<"H :"<<s.getH()<<endl;
    cout<<"Grade : "<<s.getGrade()<<endl;
    cout<<"Percentage :"<<s.getPer();
    return 0;
}