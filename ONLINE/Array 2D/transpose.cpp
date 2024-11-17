//WAP to transpose a matrix
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no. of rows: ";
    cin>>m;
    cout<<"Enter no. of column: ";
    cin>>n;
    int a[m][n];
    cout<<"Enter elements of array : "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<"Matrix before Transpose: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of matrix is: "<<endl;
    for(int j=0; j<n; j++){
        for(int i=0; i<m; i++){
          cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}