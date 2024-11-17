/*WAP to convert given integer (in days) to years,months,and days.
Assume that all months have 30 days and all years have 365 days.*/
#include<iostream>
using namespace std;
int main(){
    int data,years,months,days;
    data = 2535;
    years = data/365;
    months = data%365/30;
    days = data%365%30;
    cout<<"Years are: "<<years<<endl;
    cout<<"Months are: "<<months<<endl;
    cout<<"Days are: "<<days;
    return 0;
}