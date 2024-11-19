#include <iostream>
using namespace std;

int main() {
    string correctPassword = "Apple"; //Apple is the correct password
    string input;
    int attempts = 0;

    while (attempts < 3) {
        cout << "Enter password: ";
        cin >> input;

        if (input == correctPassword) {
            cout << "Access granted!" << endl;
            return 0; 
        }

        attempts++;
    }

    cout << "Password blocked" << endl;
    return 0;
}