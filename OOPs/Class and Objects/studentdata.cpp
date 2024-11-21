//WAP to store student marks and print percentage 
#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    string enroll;
    char s;
    int p;
    int c;
    int m;
    int h;
    int e;

    void getdata(){
        cout<<"Enter name of student: ";
        getline(cin,name);
        cout<<"Enter Enrollment of student: ";
        getline(cin,enroll);
        cout<<"Enter Section: ";
        cin>>s;
        cout<<"Enter math marks: ";
        cin>>m;
        cout<<"Enter Physics marks: ";
        cin>>p;
        cout<<"Enter Chemistry marks: ";
        cin>>c;
        cout<<"Enter Hindi marks: ";
        cin>>h;
        cout<<"Enter English marks: ";
        cin>>e;
    }
    void display(){
        cout<<"\n Name : "<<name<<endl;
        cout<<"Enrollment no. : "<<enroll<<endl;
        cout<<"Section : "<<s<<endl;
        cout<<"Maths marks: "<<m<<endl;
        cout<<"Physics marks: "<<p<<endl;
        cout<<"Chemistry marks: "<<c<<endl;
        cout<<"Hindi marks: "<<h<<endl;
        cout<<"English marks: "<<e<<endl;
    }
    int getTotalMarks(){
        return (p+c+m+e+h);
    }
    float getPercentage(int t){
        return t/5.0;
    }
    void getGrade(float per){
        if(per>=90){
             cout<<"A+ Grade ";
        }
        else if(per>=80){
            cout<<"A Grade ";
        }
        else if(per>=70){
            cout<<"B+ Grade ";
        }
        else if(per>=60){
            cout<<"B Grade ";
        }
        else if(per<50){
            cout<<"Fail ";
        }
    }
};
int main(){
    Student s;
    s.getdata();
    s.display();
    int t = s.getTotalMarks();
    cout<<"Total Marks : "<<t<<endl;
    float p= s.getPercentage(t);
    cout<<"Percentage : "<<s.getPercentage(t)<<endl;
    s.getGrade(p);
    return 0;
}