//Covert given amount into smallest possible bank notes
#include<iostream>
using namespace std;
int main(){
    int amount = 1388;
    int rm;
    int n;
    n = amount/100;//1388/100=13
    rm = amount%100;//1388%100=88
    cout<<"Hundred rupee note is "<<n<<endl;
    // cout<<"Remaining amount is "<<rm<<endl;
    n = rm/50;//88/50=1
    rm = rm%50;//88%50=38
    cout<<"Fifty rupee note is "<<n<<endl;
    // cout<<"Remaining amount is "<<rm;
    n = rm/20;//38/20=1
    rm = rm%20;//38%20=18
    cout<<"Twenty rupee note is "<<n<<endl;
    // cout<<"Remaining amount is "<<rm;
    n = rm/10;//18/10=1
    rm = rm%10;//18%10=8
    cout<<"Ten rupee note is "<<n<<endl;
    // cout<<"Remaining amount is "<<rm;
    n = rm/5;//8/5=1
    rm = rm%5;//8%5=3
    cout<<"Five rupee note is "<<n<<endl;
    // cout<<"Remaining amount is "<<rm;
    n = rm/2;//3/2=1
    rm = rm%2;//3%2=1
    cout<<"Two rupee note is "<<n<<endl;
    // cout<<"Remaining amount is "<<rm;
    n = rm/1;
    rm = rm%1;
    cout<<"one rupee note is "<<n<<endl;
    cout<<"Remaining amount is "<<rm;
    return 0;
}