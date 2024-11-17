//WAP to convert given integer (in second) to hours, minutes and seconds. 
#include<iostream>
int main(){
    using namespace std;
    int data,hour,minute,seconds;
    data = 25300;
    hour = data/3600;
    minute = data%3600/60;
    seconds = data%3600%60;
    cout<<"Hours are: "<<hour<<endl;
    cout<<"Minutes are: "<<minute<<endl;
    cout<<"Seconds are: "<<seconds;
    return 0;
}