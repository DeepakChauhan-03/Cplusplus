//Cube example
#include<iostream>
using namespace std;
class Number{
    public:
           int n;
           Number(){
            cout<<"\nNumber class Constructor is called.";
           }
           ~Number(){
            cout<<"\nNumber class Destructor is called.";
           }
    int getNumber(){
        cout<<"\nEnter any number: ";
        cin>>n;
        return n;
    }       
};
class Square:public Number{
    public:
       Square(){
         cout<<"\nSquare class Constructor is called.";
       }
       ~Square(){
        cout<<"\nSquare class Destructor is called.";
       }
    void getSquare(){
        int x = getNumber();
        int r = x*x;
        cout<<"\nSquare is: "<<r;
    }   
};
class Cube:public Number{
    public:
           Cube(){
            cout<<"\nCube class Constructor is called.";
           }
           ~Cube(){
            cout<<"\nCube class Destructor is called";
           }
        void getCube(){
            int x = getNumber();
            int r = x*x*x;
            cout<<"\nCube is: "<<r;
        }   
};
int main(){
    Square s;
    Cube c;
    s.getSquare();
    c.getCube();
    return 0;
}