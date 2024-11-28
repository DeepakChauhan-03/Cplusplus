//Example of Single Inheritance
#include<iostream>
using namespace std;
class Animal{
    public:
     Animal(){
        cout<<"\n Animal Class Default Constructor is Called.";
     }
     ~Animal(){
        cout<<"\n Animal Class Default Destructor is Called.";
     }
     void eat(){
        cout<<"\nThe Animal eats food.";
     }
};
//Inheritance 
class Dog:public Animal{
     public:
     Dog(){
        cout<<"\n Dog Class Default constructor is called.";
     }
     ~Dog(){
        cout<<"\n Dog Class Default Destructor is called.";
     }
     void bark(){
        cout<<"\n The dog bark.";
     }
};
int main(){
    Dog d;
    d.eat();
    d.bark();
    Animal a;
    a.eat();
    return 0;
}