#include<iostream>
using namespace std;
 class student{
    public:
    int roll_no;
    char section;
    float eng,math,science;
    float total;
    
    void takedata(){
        cout<<"Enter roll number: ";
        cin>>roll_no;
        cout<<"Enter Section: ";
        cin>>section;
        cout<<"English: ";
        cin>>eng;
        cout<<"Math: ";
        cin>>math;
        cout<<"Science: ";
        cin>>science;

    }
    float ctotal(){
        return eng+math+science;
    }

    void showdata(){
         cout<<"roll number: "<<roll_no<<endl;
        cout<<"Section: "<<section<<endl;
        cout<<"English: "<<eng<<endl;
        cout<<"Math: "<<math<<endl;
        cout<<"Science: "<<science<<endl;

    }
    
 };
 
 int main(){
    student A;
    A.takedata();
    A.showdata();
    cout<<"Total marks of student is: "<<A.ctotal();
    return 0;
 }