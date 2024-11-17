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
    int mx= INT16_MIN;
    cout<<"Enter elements of matrix: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            mx=max(mx,arr[i][j]);
        }
    }
    cout<<"Maximum elements of matrix is :"<<mx;
    return 0;
}