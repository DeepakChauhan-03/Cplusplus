//WAP to print table of given number
#include<iostream>
using namespace std;
void table();
void table(){
    int n;
    cout<<"Enter any number :";
    cin>>n;
    for(int i=1; i<=10; i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}
int main(){
    table();
    return 0;
}