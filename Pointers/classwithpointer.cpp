//class with pointer
#include<iostream>
using namespace std;
class Demo{
    public:
      int x;
      int y;
      int z;
      void getData(int *a, int *b){
        x = *a;
        y = *b;
      }
      int sum(){
        z=x+y;
        return z;
      }
};
int main(){
    int a,b;
    a=7;
    b=5;
    Demo d;
    Demo *d1 = &d;
    d1->getData(&a,&b);
    int x = d1->sum();
    cout<<"Addition : "<<x;
    return 0;
}