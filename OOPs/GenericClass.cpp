//Generic using class
#include<iostream>
using namespace std;
template<class T>
class Hello{
    public:
    T obj;
    Hello(T x){
        obj = x;
    }
    void showdata(){
        cout<<"\nObject is : "<<obj;
    }
};
int main(){
    Hello<int>t1(20);
    t1.showdata();
    
    Hello<float>t2(15.5f);
    t2.showdata();

    Hello<string>t3("This is string");
    t3.showdata();

    Hello<char>t4('D');
    t4.showdata();
    return 0;
}