//method overriding
#include<iostream>
using namespace std;
class Parent{
    public:
     virtual void display(){
        cout<<"\nThis is Parent class Display Method.";
     }
};
class Derived : public Parent{
    public:
    void display(){
        cout<<"\nThis is Derived class Display Method.";
    }
};
class Derived1 : public Parent{
    public:
      void display(){
        cout<<"\nThis is Derived 1 class Display Method.";
      }
};
int main(){
    Parent *p1;   //Base class Pointer
    Derived obj1;
    p1=&obj1;  //initialize base class pointer to derived class
    p1->display();

    Derived1 obj2;
    p1=&obj2;  //Initialize base class pointer to derived 1 class
    p1->display();
    return 0;
}