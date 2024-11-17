/*WAP to print the following pattern 1111
                                     222
                                     33*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n-i+1;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}                                     

