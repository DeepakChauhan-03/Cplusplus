//WAP to add two matrix
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;
    int a[m][n];
    int b[m][n];
    int c[m][n];
    cout<<"Enter elements of first matrix: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of second matrix: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>b[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"Sum of matrix is: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}