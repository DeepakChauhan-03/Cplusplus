//Default Argument
#include<iostream>
using namespace std;
class Test{
    public:
     void add(int a=1,int b=2,int c=3,int d=4,int e=5){
        int r = a+b+c+d+e;
        cout<<"\nAdd : "<<r;
     }
};
int main(){
    Test t;
    t.add();
    t.add(10,20);
    t.add(10,20,30);
    t.add(10,20,30,40);
    t.add(10,20,30,40,50);

    return 0;
}