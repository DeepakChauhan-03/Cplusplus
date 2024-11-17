//WAP to check that given character is vowel or not using switch operator
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    switch(ch){
        case 'a': cout<<"Vowel";
        break;
        case 'e': cout<<"Vowel";
        break;
        case 'i': cout<<"Vowel";
        break;
        case 'o': cout<<"Vowel";
        break;
        case 'u': cout<<"Vowel";
        break;
        default: cout<<ch<<" is not a vowel";
    }
    return 0;
}