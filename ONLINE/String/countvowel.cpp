//WAP to count vowel in a string
#include<iostream>
using namespace std;
int main(){
    string a;
    cout<<"Enter the string: ";
    getline(cin,a);
    int n = a.length();
    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            count++;
        }
    }
    cout<<"Number of vowel in string is: "<<count;
    return 0;
}