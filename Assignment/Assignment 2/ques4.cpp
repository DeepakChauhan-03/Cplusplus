//WAP to print days in a month
#include<iostream>
using namespace std;
int main(){
    int month,year;
    cout<<"Enter the month: ";
    cin>>month;
    cout<<"Enter the year: ";
    cin>>year;
    if(month==1){
        cout<<"January "<<year<<" has 31 days."<<endl;
    }
    else if(month==2){
        if((year%4==0 && year%100!=0) ||(year%400==0)){
            cout<<"February "<<year<<" has 29 days"<<endl;
        }
        else{
            cout<<"February "<<year<<" has 28 days"<<endl;
        }
    }
    else if(month==3){
        cout<<"March "<<year<<" has 31 days"<<endl;
    }
     else if(month==4){
        cout<<"April "<<year<<" has 30 days"<<endl;
    }
     else if(month==5){
        cout<<"May "<<year<<" has 31 days"<<endl;
    }
     else if(month==6){
        cout<<"June "<<year<<" has 30 days"<<endl;
    }
     else if(month==7){
        cout<<"July "<<year<<" has 31 days"<<endl;
    }
     else if(month==8){
        cout<<"August "<<year<<" has 31 days"<<endl;
    }
     else if(month==9){
        cout<<"September "<<year<<" has 30 days"<<endl;
    }
     else if(month==10){
        cout<<"October "<<year<<" has 31 days"<<endl;
    }
     else if(month==11){
        cout<<"November "<<year<<" has 30 days"<<endl;
    }
     else if(month==12){
        cout<<"December "<<year<<" has 31 days"<<endl;
    }
    return 0;
}