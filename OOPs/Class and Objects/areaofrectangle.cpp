//WAP for area of triangle
#include<iostream>
using namespace std;
class Rectangle{
    public:
    int l;   //Data Member
    int b;

    void getdata(){    //Member function
        cout<<"Enter Length: ";
        cin>>l;
        cout<<"Enter Breadth: ";
        cin>>b;
    }
    void getArea(){
        cout<<"Area: "<<(l*b);
    }
};
int main(){
    Rectangle R;
    R.getdata();
    R.getArea();
    return 0;
}