//Take given amount into smallest possible bank notes
#include<iostream>
using namespace std;
int main(){
    int Amount = 1388;
    int rm, n;
    n = Amount/100;
    rm = Amount-(n*100);
    
    cout<<"Note of 100 is = "<<n<<endl;
    
    return 0;
}