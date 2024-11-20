//WAP for area of triangle
#include<iostream>
using namespace std;
class Rectangle{
    public:
    int l;   //Data Member
    int b;

    void getinput(){    //Member function
        cout<<"Enter Length: ";
        cin>>l;
        cout<<"Enter Breadth: ";
        cin>>b;
    }
    void getArea(){
        cout<<"Area: "<<(l*b);
    }
    void getPara(){
        cout<<"\nParameter is: "<<(2*(l+b));
    }
};
int main(){
    Rectangle R;
    R.getinput();
    R.getArea();
    R.getPara();
    return 0;
}