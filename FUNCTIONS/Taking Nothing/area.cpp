//WAP to calculate area and circumference of a circle by using functions
#include<iostream>
using namespace std;
    void area();
    void cf();
    
    void area(){
        float r,ar;
        cout<<"Enter radius : ";
        cin>>r;
        ar = 3.14*r*r;
        cout<<"Area of circle is: "<<ar<<endl;
    }
    void cf(){
        float r,cr;
        cout<<"Enter radius: ";
        cin>>r;
        cr = 2*3.14*r;
        cout<<"Circumference of circle is : "<<cr<<endl;
    }
    int main(){
        area();
        cf();
        return 0;
    }