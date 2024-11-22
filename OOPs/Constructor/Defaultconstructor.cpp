//Default Constructor (Parameter Less Constructor)
#include<iostream>
using namespace std;
class Point{
     int x;
     int y;
 public:
     Point(){
        cout<<"Default Constructor is called."<<endl;
        x=0;
        y=0;
     }
     void ShowData(){
        cout<<"X is: "<<x<<endl;
        cout<<"Y is: "<<y<<endl;
     }
};
int main(){
    Point p1;
    p1.ShowData();
    Point p2;
    p2.ShowData();
    return 0;
}