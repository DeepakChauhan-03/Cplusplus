/*Taking input from user and print area and 
circumference of a circle*/
#include<iostream>
using namespace std;
int main(){
    float r,area,circumference;
    cout<<"Enter the radius: ";
    cin>>r;
    area = 3.14*r*r;
    circumference = 2*3.14*r;
    cout<<"Area of circle is: "<<area<<endl;
    cout<<"Circumference of circle is: "<<circumference;
    return 0;
}