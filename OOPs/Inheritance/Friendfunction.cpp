#include<iostream>
using namespace std;
class Box{
    private:
       double length;
    public:
       Box(double len){
        length = len;
       }   
       double getLength(){
        return length;
       }
       void setLength(double len){
        length = len;
       }
       friend void printLength(Box x1);
 };
 void printLength(Box x1){
    cout<<"\nLength using friend function : "<<x1.length;
 }
 int main(){
    Box b(10.0);
    printLength(b);
    return 0;
 }