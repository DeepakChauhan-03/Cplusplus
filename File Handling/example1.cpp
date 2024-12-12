//File Handling
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string s = "Hello";
    //creating object
    ofstream out("hello.txt");
    //output
    out<<s;
    //to close the file
    out.close();
    return 0;
}