// Linear Search
#include <iostream>
using namespace std;
int main() {
  int arr[5]={1,2,3,4,5};
  int element = 7;
  int found;
  for(int i = 0; i<5; i++){
      if(arr[i]==element){
           found = arr[i];
      }
  }
  if(found==element){
      cout<<"Element found";
  }
  else{
      cout<<"Element not found";
  }
    return 0;
}