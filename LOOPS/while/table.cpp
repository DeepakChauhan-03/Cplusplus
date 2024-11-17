//WAP to print table of a given number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int i=1;
    while (i<=10)
    {
        cout<<n<<" * "<<i<<" = "<<(n*i)<<endl;
        i++;
    }
    
    return 0;
}