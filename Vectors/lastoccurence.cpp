//Find the last occurence of an element x in the given vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v(6);
    cout<<"Enter the elements of vector : ";
    for(int i=0; i<6; i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter x : ";
    cin>>x;

    int occurence = -1;
    for(int i=0; i<v.size(); i++){
        if(v[i]==x){
            occurence = i;
        }
    }
    cout<<"Occurence is : "<<occurence;
    return 0;
}