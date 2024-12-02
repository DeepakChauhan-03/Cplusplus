//Method overloading or Compile time polymorphism
#include<iostream>
using namespace std;
class Test{
    public:
        void add(){
            int a,b;
            a=1;
            b=2;
            cout<<"\nAddition without argument : "<<(a+b)<<endl;
        }
        void add(int a, int b){
            cout<<"Addition with two int argument :"<<(a+b)<<endl;
        }
        void add(double a,int b){
            cout<<"Addition with float and int argument : "<<(a+b)<<endl;
        }
        void add(double a,double b){
            cout<<"Addition with two float argument : "<<(a+b)<<endl;
        }
        void add(string a,string b){
            cout<<"Addition with two string argument : "<<(a+b)<<endl;
        }
};
int main(){
    Test b;
    b.add();
    b.add(1,2);
    b.add(2.5,6);
    b.add(3.4,6.5);
    b.add("1","2");
    return 0;
}