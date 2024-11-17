//WAP to print string by using loops
#include<iostream>
using namespace std;
int main(){
    string a = "Hii i am Deepak";
    int n = a.length();
    for(int i=0; i<n; i++){
        cout<<a[i];
    }
    return 0;
}