//WAP to print table of a number by using for loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    for(int i=1; i<=10; i++){
        cout<<n<<" * "<<i<<" = "<<(n*i)<<endl;
    }
    return 0;
}