//Read The DATA
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string s;
    cout<<"\nReading data from the file : "<<endl;
    ifstream obj("thursday.txt",ios::in);

    while(getline(obj,s)){
        cout<<s;
    }
    obj.close();
    return 0;
}