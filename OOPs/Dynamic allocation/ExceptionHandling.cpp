//Exception handling
#include<iostream>
using namespace std;
int main(){
    cout<<"Line 1 "<<endl;
    cout<<"Line 2 "<<endl;
    cout<<"Line 3 ";
    int a=20,b=1,c=0;

    try{
        cout<<"\nInside Try block";
        if(b==0){
            throw b;
        }
        if(b>1){
            throw 2.0;
        }
        c=a/b;
        cout<<"\nThis is catch block ";
    }
    catch(int i){
        cout<<"\nDenominator should not be "<<i<<endl;
    }
    catch(float i){
        cout<<"\nCatch block float executed "<<i;
    }
    
    cout<<"Line 4 "<<endl;
    cout<<"Line 5 "<<endl;
    cout<<"Line 6 "<<endl;
    cout<<"Line 7 "<<endl;
    cout<<"Line 8 "<<endl;

    return 0;
}