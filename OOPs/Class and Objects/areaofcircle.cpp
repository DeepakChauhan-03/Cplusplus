//WAP to calculate are of circle by using class and objects
#include<iostream>
using namespace std;
class Circle{
   public:
   int r;

   void getinput(){
    cout<<"Enter radius: ";
    cin>>r;
   }

   void getoutput(){
    cout<<"Area of circle is: "<<(3.14*r*r)<<endl;
    cout<<"Circumference of circle is: "<<(2*3.14*r);
   }
   
};
int main(){
    Circle C;
    C.getinput();
    C.getoutput();
    return 0;
}