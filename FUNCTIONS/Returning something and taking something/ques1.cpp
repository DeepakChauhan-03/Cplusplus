//WAP to print table
#include<iostream>
using namespace std;
int table(int);

int table(int x){
    int a=x;
    for(int i=1; i<=10; i++){
      a=a*i;
      return a;
    }
}
