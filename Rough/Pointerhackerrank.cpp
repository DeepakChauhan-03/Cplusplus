#include <iostream>
using namespace std;
void update(int *a,int *b) {
    // Complete this function  
      int sum = *a + *b;  // Calculate the sum
    int diff;           // Declare variable for difference

    if (*a > *b) {
        diff = *a - *b; // If a is greater, subtract b from a
    } else {
        diff = *b - *a; // If b is greater, subtract a from b
    }

    *a = sum;  
    *b = diff; 
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}