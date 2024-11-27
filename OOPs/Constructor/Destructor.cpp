//Example of Destructor
#include<iostream>
using namespace std;
class Point{
    int x;
    int y;

public:
        Point(){
            cout<<"Default constructor is called."<<endl;
        }
       ~Point(){
            cout<<"Default Destructor is called."<<endl;
        } 
};
int main(){
    Point p1;
    Point p2;
    return 0;
}