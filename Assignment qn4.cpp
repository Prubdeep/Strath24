#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    //Ask user to input 2 numbers
    cout << "Enter two numbers: \n";
    cin >> num1 >> num2;

    switch (num1 > num2 ? 1 : (num2 > num1 ? 2 : 3)) {
    case 1:
        cout << "Maximum number is: " << num1 << "\n";
        break;
    case 2:
        cout << "Maximum number is: " << num2 << "\n";
        break;
    case 3:
        cout << "Both numbers are equal.\n";
        break;
    }

    return 0;
}