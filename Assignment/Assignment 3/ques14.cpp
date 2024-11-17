//WAP to take char array and print it
#include<iostream>
using namespace std;
int main(){
    char arr[]={'A','B','C','D','E','F'};
    int n = sizeof(arr)/1;
    cout<<"Array elements are: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}