//Example 2 of single inheritance
#include<iostream>
using namespace std;
class Point{
    public:
           int x;
           int y;
    Point(){
        cout<<endl<<"Point class Default constructor is called.";
    }   
    Point(int x, int y){
        this->x=x;
        this->y=y;
        cout<<endl<<"Point class Parameterized Constructor called.";
    }   
    ~Point(){
        cout<<endl<<"Point class Destructor is called";
    } 
};
//Child class
class Circle:public Point{
    float r;
    public:
         Circle(){
            cout<<endl<<"Circle class default constructor is called.";
         }
         Circle(int x, int y, float r):Point(x,y){
            //To call parameterized constructor
            this->r=r;
            cout<<endl<<"Circle class Parameterized constructor is called.";
         }
         ~Circle(){
            cout<<endl<<"Circle class Destructor is called.";
         }
};
int main(){
    Circle p1(10,20,2.5);
    return 0;
}