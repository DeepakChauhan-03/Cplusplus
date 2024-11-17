#include<iostream>
using namespace std;
class car{
 public:
   int price;
   string name;
   char model;

};
int main(){
     car c1;
     c1.price = 200000;
     c1.name = "AUDI";
     c1.model = 'D';
     cout<<c1.price<<endl;
     cout<<c1.name<<endl;
     cout<<c1.model;
    return 0;
}