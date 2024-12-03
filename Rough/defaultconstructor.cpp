#include <iostream>
using namespace std;
class Point
{
    int x;
    int y;

public:
    Point()
    {
        cout<<"Default constructor is called"<<endl;
         x = 0;
         y = 0;
    }
    void showData()
    {
        cout<< "X is: " << x << endl;
        cout<< "Y is: " << y << endl;
    }
};
int main()
{
    Point p1;
    p1.showData();
    Point p2;
    p2.showData();
    return 0;
}
