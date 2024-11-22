#include<iostream>
using namespace std;
class Demo{
    int x = 10;
    int y = 20;
    public:
    void showData(){
        cout<<"X is : "<<x<<endl;
        cout<<"Y is : "<<y;
    }
};
int main(){
    Demo d;
    d.showData();
    return 0;
}