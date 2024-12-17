//Count occurence
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    cout<<"Enter elements : "<<endl;
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter x :";
    cin>>x;

    int occurence = 0;

    for(int ele:v){
        if(ele==x){
            occurence++;
        }
    }
    cout<<"Occurence is : "<<occurence;
    return 0;
}