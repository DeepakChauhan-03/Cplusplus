//Pure virtual function or Abstraction
#include<iostream>
using namespace std;
class Subject{  //This is abstract class
  public:
     virtual void physics()=0;  //It is pure virtual function
     virtual void chemistry()=0; 
     //Abstract method
};
class School:public Subject{
    public:
      void physics(){
        cout<<"It is basic physics"<<endl;
      }
      void chemistry(){
        cout<<"It is Physical chemistry"<<endl;
      }
      void maths(){
        cout<<"Cengage is best for JEE maths"<<endl;
      }
};
int main(){
    School obj;
    obj.physics();
    obj.chemistry();
    obj.maths();
    
    Subject *s;
    s=&obj;
    s->physics();
    s->chemistry();
    
    return 0;
}