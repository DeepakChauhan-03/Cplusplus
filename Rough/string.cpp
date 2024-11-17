#include <iostream>
#include <string>
using namespace std;

int main() {
	string a="abcd";
    string b="ef";
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<a<<b<<endl;
    a[0]='e';
    b[0]='a';
    cout<<a<<" "<<b;
    return 0;
}