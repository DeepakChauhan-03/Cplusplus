//WAP to print table of a given number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int i=1;
    do{
        cout<<n<<" * "<<i<<" = "<<(n*i)<<endl;
        i++;
    }while(i<=10);
    return 0;
}