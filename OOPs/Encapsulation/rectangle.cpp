#include<iostream>
using namespace std;
class Rectangle{
      int l;
      int b;
 public:
    void acceptData();
    void showData();
    void getArea();
    void getPira();
};
void Rectangle::acceptData(){
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter Breadth: ";
    cin>>b;
}
void Rectangle::showData(){
    cout<<"Length is:"<<l<<endl;
    cout<<"Breadth is: "<<b<<endl;  
}
void Rectangle::getArea(){
    cout<<"Area of rectangle is :"<<l*b<<endl;
}
void Rectangle::getPira(){
    cout<<"Parameter of rectangle is:"<<2*(l+b)<<endl;
}
int main(){
    Rectangle r;
    r.acceptData();
    r.showData();
    r.getArea();
    r.getPira();
    return 0;
}


