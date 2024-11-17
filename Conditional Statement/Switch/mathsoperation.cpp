//WAP to print square, cube , area of circle , circumference, area of rectangle,simple intrest
#include<iostream>
using namespace std;
int main(){
     int a,b,radius,length,breadth,P,R,T;
     int op;
     cout<<"Enter 1 for Square"<<endl;
     cout<<"Enter 2 for Cube"<<endl;
     cout<<"Enter 3 for Area"<<endl;
     cout<<"Enter 4 for Circumference"<<endl;
     cout<<"Enter 5 for Area of Rectangle"<<endl;
     cout<<"Enter 6 for Simple Intrest"<<endl;
     cout<<"Enter Your choice: "<<endl;
     cin>>op;
     switch (op){
        case 1: 
        cout<<"Enter Number :";
        cin>>a;
        cout<<"Square of given number is: "<<a*a;
        break;
        case 2:
        cout<<"Enter Number: ";
        cin>>b;
        cout<<"Cube of number is: "<<b*b*b;
        break;
        case 3:
        cout<<"Enter radius: ";
        cin>>radius;
        cout<<"Area of circle is: "<<3.14*radius*radius;
        break;
        case 4:
        cout<<"Enter radius: ";
        cin>>radius;
        cout<<"CIRCUMFERENCE of number is: "<<2*3.14*radius;
        break;
        case 5:
        cout<<"Enter length : ";
        cin>>length;
        cout<<"Enter breadth: ";
        cin>>breadth;
        cout<<"Area of rectangle  is: "<<length *breadth;
        break;
        case 6:
        cout<<"Enter Principle: ";
        cin>>P;
        cout<<"Enter Rate: ";
        cin>>R;
        cout<<"Enter Time: ";
        cin>>T;
        cout<<"Simple Intrest is : "<<(P*R*T)/100;
        break;
     }
    return 0;
}