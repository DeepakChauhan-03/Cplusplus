#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter size of row";
    cin>>m;
    cout<<"Enter size of column";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"First position is"<<arr[0][0]<<endl;
    cout<<"Third position is "<<arr[1][1];
    return 0;
}