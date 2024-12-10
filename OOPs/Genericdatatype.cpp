//Gereric Datatype example
#include<iostream>
using namespace std;
template<class A>
void print_data(A out){
    cout<<"\nOutput is : "<<out;
}
int main(){
    print_data(10);
    print_data(20.60);
    print_data("Hello");
    print_data('D');
    return 0;
}