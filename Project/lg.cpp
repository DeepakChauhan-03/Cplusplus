#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class temp {
    string username, Email, password;
    string searchname, searchpass, searchemail;
    fstream file;

public:
    void login();
    void signup();
    void forgot();
} obj;

int main() {
    char choice;

    while (true) {
        cout << "\n1- Login" << endl;
        cout << "2- Sign-up" << endl;
        cout << "3- Forgot Password" << endl;
        cout << "4- Exit" << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;
        cin.ignore(); // Clear the newline character from the input buffer

        switch (choice) {
        case '1':
            obj.login();
            break;

        case '2':
            obj.signup();
            break;

        case '3':
            obj.forgot();
            break;

        case '4':
            return 0;

        default:
            cout << "Invalid Selection. Please try again!" << endl;
        }
    }
}

void temp::signup() {
    cout << "\n---SIGN UP---" << endl;
    cout << "Enter Your Username: ";
    getline(cin, username);
    cout << "Enter Your Email: ";
    getline(cin, Email);
    cout << "Enter Your Password: ";
    getline(cin, password);

    file.open("loginData.txt", ios::out | ios::app);
    if (file.is_open()) {
        file << username << "*" << Email << "*" << password << endl;
        file.close();
        cout << "Account created successfully!" << endl;
    } else {
        cout << "Error opening file for writing." << endl;
    }
}

void temp::login() {
    cout << "\n---LOGIN---" << endl;
    cout << "Enter your username: ";
    getline(cin, searchname);
    cout << "Enter your password: ";
    getline(cin, searchpass);

    file.open("loginData.txt", ios::in);
    if (file.is_open()) {
        bool found = false;
        while (getline(file, username, '*') && getline(file, Email, '*') && getline(file, password)) {
            if (username == searchname && password == searchpass) {
                found = true;
                cout << "\nLogin Successful!" << endl;
                cout << "Username: " << username << endl;
                cout << "Email: " << Email << endl;
                break;
            }
        }
        file.close();
        if (!found) {
            cout << "\nInvalid username or password. Please try again." << endl;
        }
    } else {
        cout << "Error opening file for reading." << endl;
    }
}

void temp::forgot() {
    cout << "\n---FORGOT PASSWORD---" << endl;
    cout << "Enter your username: ";
    getline(cin, searchname);
    cout << "Enter your email: ";
    getline(cin, searchemail);

    file.open("loginData.txt", ios::in);
    if (file.is_open()) {
        bool found = false;
        while (getline(file, username, '*') && getline(file, Email, '*') && getline(file, password)) {
            if (username == searchname && Email == searchemail) {
                found = true;
                cout << "\nAccount found!" << endl;
                cout << "Your password is: " << password << endl;
                break;
            }
        }
        file.close();
        if (!found) {
            cout << "\nNo account matches the provided details." << endl;
        }
    } else {
        cout << "Error opening file for reading." << endl;
    }
}
