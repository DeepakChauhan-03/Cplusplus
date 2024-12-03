//WAP to print area of Rectangle
#include<iostream>
using namespace std;
int main(){
     int l = 4;
     int b = 2;
     int *x;
     int *y;
     x = &l;
     y = &b;
     int area = *x * *y;
     cout<<"Area of rectangle : "<<area;
    return 0;
}