//WAP to find largest and lowest element of 2D array
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row size: ";
    cin>>m;
    cout<<"Enter column size: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int max = arr[0][0];
    int min = arr[0][0];
    for(int i=1; i<m; i++){
        for(int j=1; j<n; j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    cout<<"Maximum element is : "<<max<<endl;
    cout<<"Minimum element is: "<<min;
    return 0;
}