//Student Details
#include<iostream>
#include<fstream>
using namespace std;
class Student{
    string name;
    string enroll;
    int rollno;
    float per;

    public:
     void acceptData(){
        cout<<"Enter name : ";
        getline(cin,name);
        cout<<"Enter Enrollment No : ";
        getline(cin,enroll);
        cout<<"Enter Roll No : ";
        cin>>rollno;
        cout<<"Enter Percentage : ";
        cin>>per;
     }
     void getData(){
        cout<<"\nName of the Student is : "<<name<<endl;
        cout<<"Enrollment No is : "<<enroll<<endl;
        cout<<"Roll no is : "<<rollno<<endl;
        cout<<"Percentage is : "<<per<<endl;
     }
   
};
int main(){
    Student s;
    s.acceptData();
    fstream fs("st", ios::out|ios::binary);
    fs.write((char *)&s, sizeof(s));
    cout<<"\nData saved successfully"<<endl;
    fs.close();

    ifstream fin("st",ios::in|ios::binary);
    Student m;
    fin.read((char *)&m,sizeof(m));
    cout<<"\nRead object from the file"<<endl;
    m.getData();
    fin.close();
    return 0;
}