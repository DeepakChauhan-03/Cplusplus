#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> a;
    cout<<"Size : "<<a.size()<<endl;
    cout<<"Capacity : "<<a.capacity()<<endl;
    
    a.push_back(10);
    cout<<"Size : "<<a.size()<<endl;
    cout<<"Capacity : "<<a.capacity()<<endl;

    a.push_back(20);
    cout<<"Size : "<<a.size()<<endl;
    cout<<"Capacity : "<<a.capacity()<<endl;

    a.push_back(30);
    cout<<"Size : "<<a.size()<<endl;
    cout<<"Capacity : "<<a.capacity()<<endl;

    a.push_back(40);
    cout<<"Size : "<<a.size()<<endl;
    cout<<"Capacity : "<<a.capacity()<<endl;

    a.push_back(50);
    cout<<"Size : "<<a.size()<<endl;
    cout<<"Capacity : "<<a.capacity()<<endl;

    cout<<"Output is : ";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}