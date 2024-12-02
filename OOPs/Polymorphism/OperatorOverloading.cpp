//Operator Overloading
#include<iostream>
using namespace std;
class Space{
    public:
        int x;
        int y;
        int z;
    Space(int x,int y,int z){   //Constructor
        this->x=x;
        this->y=y;
        this->z=z;
    }    
    void showData(){
        cout<<"\n(x,y,z) : ("<<x<<","<<y<<","<<z<<")";
    }
    void operator -(){
        x = -x;
        y = -y;
        z = -z;
    }
};
int main(){
    Space s(10,-20,30);
    s.showData();
    -s;
    s.showData();
    return 0;
}