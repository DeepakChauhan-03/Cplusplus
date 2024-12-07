//Static method and static variable
#include<iostream>
using namespace std;
class Counter{
   public:
      int x;
      static int count;   //static variable
      static int getCount();  //static method
        Counter(){
             cout<<"\nDefault constructor is called";
             x = 1;
             count++;
        }
        Counter(int x){
            this->x=x;
            cout<<"\nParameterized constructor is called";
            count++;
        }
};
int Counter::count=0;  //declaration of static variable
int Counter::getCount(){  //declaration of static method
    return count;
}
int main(){
    Counter c1;
    Counter c2;
    Counter c3(10);
    cout<<"\nNumber of object created : "<<c1.count;
    cout<<"\nNumber of object created : "<<c2.count;
    cout<<"\nNumber of object created : "<<c3.count;

    cout<<"\nNumber of object created : "<<Counter::count; //calling static variable
    cout<<"\nCall static method : "<<Counter::getCount(); //calling static method
    return 0;
}