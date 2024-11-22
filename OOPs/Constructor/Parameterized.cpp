//Parameterized Constructor
#include<iostream>
using namespace std;
class Point{
    int x; //instance variable
    int y;
 public:
     Point(){
        cout<<"\nDefault constructor is called."<<endl;
        x=0;
        y=0;
     }
     Point(int a, int b){   //Formal Argunment
         cout<<"Parameterized Constructor is called."<<endl;
         x=a;
         y=b;
     }
     void showdata(){
        cout<<"X is: "<<x<<endl;
        cout<<"Y is: "<<y<<endl;
     }
};
int main(){
    Point p1;
    p1.showdata();
    Point p2(1,2);
    p2.showdata();
    Point p3(2,5);
    return 0;
}