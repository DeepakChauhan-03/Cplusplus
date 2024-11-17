#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the size of the square: ";
    cin >> size;
    for (int i = 1; i <= size; i++) {
        cout << "* ";
    }
    cout << endl;
    for (int i = 1; i <= size - 2; i++) {
        cout << "*";  
        for (int j = 1; j <= size - 2; j++) {
            cout << "  ";  
        }
        cout << " *" << endl;  
    }

    for (int i = 1; i <= size; i++) {
        cout << "* ";
    }
    cout << endl;

    return 0;
}
