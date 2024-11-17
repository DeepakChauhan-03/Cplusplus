//WAP to add matrix
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row size: ";
    cin>>m;
    cout<<"Enter column size: ";
    cin>>n;
    int a[m][n];
    cout<<"Enter element of first matrix : "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<"Enter element of index "<<i<<j<<" ";
            cin>>a[i][j];
        }
    }
    int b[m][n];
    cout<<"Enter element of second matrix: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<"Enter element of index "<<i<<j<<" ";
            cin>>b[i][j];
        }
    }
    int c[m][n];
    cout<<"Sum of first and second matrix is: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<" ";
        }
      cout<<endl;
    }
    return 0;
}