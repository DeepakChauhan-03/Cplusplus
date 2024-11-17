//WAP to find maximum element in a matrix
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no. of rows: ";
    cin>>m;
    cout<<"Enter no. of columns: ";
    cin>>n;
    int arr[m][n];
    int mn= INT16_MAX;
    cout<<"Enter elements of matrix: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            mn=min(mn,arr[i][j]);
        }
    }
    cout<<"Minimum element of matrix is :"<<mn;
    return 0;
}