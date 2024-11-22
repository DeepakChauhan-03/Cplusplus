#include<iostream>
using namespace std;
class Demo{
    public:
    int x=10;
    int y=20;
    void showData(){
        cout<<"X is :"<<x<<endl;
        cout<<"Y is : "<<y<<endl;
    }
};
int main(){
    Demo d;
    d.showData();
    return 0;
}