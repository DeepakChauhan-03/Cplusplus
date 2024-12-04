//call by reference 
#include<iostream>
using namespace std;
void swap(int *, int *);
void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    //*(1024)=*(1056)
    *b = c;
    //*(1056) = 7
    cout<<"\nSwapping inside swap function : A = "<<*a<<" B = "<<*b;
}
int main(){
    int a,b;
    a =7;
    b = 5;
    cout<<"\nSwapping before inside main function : A = "<<a<<" B = "<<b;
    swap(&a,&b);
    cout<<"\nSwapping before inside main function : A = "<<a<<" B = "<<b;
    return 0;
}