//Taking input and output
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    //input
    int a= 1;
    for(int i=0; i<5; i++){
        int element;
        cout<<"Enter element no "<<a<<" : ";
        cin>>element;
        v.push_back(element);
        a++;
    }
    //Output
    cout<<"Output is : ";
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    
    cout<<"Output after pushback is : ";
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}