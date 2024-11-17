//WAP to print union and intersection of arrays
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter size of array A: ";
    cin>>m;
    cout<<"Enter size of Array B: ";
    cin>>n;
    int a[m];
    int b[n];
    cout<<"Enter the elements of array A: "<<endl;
    for(int i=0; i<m; i++){
        cin>>a[i];
    }
    cout<<"Enter the elements of array B: "<<endl;
    for(int j=0; j<n; j++){
        cin>>b[j];
    }
    cout<<"Intersection of A and B is: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
            }
        }
    }
    return 0;
}