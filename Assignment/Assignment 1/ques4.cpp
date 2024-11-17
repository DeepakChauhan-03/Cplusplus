//WAP to integral quotient and remainder of a division
#include<iostream>
using namespace std;
int main(){
    int numerator,denominator,quotient,remainder;
    numerator = 2500;
    denominator = 235;
    quotient = numerator/denominator;
    remainder = numerator%denominator;
    cout<<"Quotient is: "<<quotient<<endl;
    cout<<"Remainder is: "<<remainder;

    return 0;
}