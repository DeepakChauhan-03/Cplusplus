#include <iostream>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1)  // 0 and 1 are not prime numbers
            return false;
        if (n == 2)  // 2 is a prime number
            return true;
        
        // Check for factors from 2 to n/2
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                return false;  // Not a prime number
            }
        }
        return true;  // Prime number
    }
};

int main() {
    Solution n1;
    cout << boolalpha << n1.isPrime(2) << endl;  // Output: true
    cout << boolalpha << n1.isPrime(4) << endl;  // Output: false
    
    return 0;
}
