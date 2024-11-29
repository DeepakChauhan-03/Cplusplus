//Multiple Inheritance 
#include<iostream>
using namespace std;
class M{
    public:
    int m;
    M(){
        cout<<"\nM class default constructor is called.";
    }
    ~M(){
        cout<<"\nM class default Destructor is called.";
    }
     void getM(int m){
        this->m=m;
    }
};
class N{
    public:
    int n;
    N(){
        cout<<"\nN class default constructor is called.";
    }
      ~N(){
        cout<<"\nN class default Destructor is called.";
    }
    void getN(int n){
        this->n=n;
    }
};
class P:public M, public N{
    public:
    int t=0;
     P(){
        cout<<"\nP class default constructor is called.";
    }
    ~P(){
        cout<<"\nP class default Destructor is called.";
    }
    void getTotal(){
        t=m+n;
    }
   void showData(){
    cout<<"\nM value: "<<m;
    cout<<"\nN value: "<<n;
    cout<<"\nTotal: "<<t;
   }
};
int main(){
    P obj1;
    obj1.getM(10);
    obj1.getN(20);
    obj1.getTotal();
    obj1.showData();
    return 0;
}