#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double value1, value2;

    cout << "Menu:\n";
    cout << "1. Area of a circle\n";
    cout << "2. Area of a rectangle\n";
    cout << "3. Area of a triangle\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
       cout << "Enter radius: ";
       cin >> value1;
       cout << "Area: " << 3.14159 * value1 * value1 << "\n";
        break;
    case 2:
       cout << "Enter length and width: ";
       cin >> value1 >> value2;
       cout << "Area: " << value1 * value2 << "\n";
        break;
    case 3:
       cout << "Enter base and height: ";
       cin >> value1 >> value2;
       cout << "Area: " << 0.5 * value1 * value2 << "\n";
        break;
    default:
       cout << "Invalid choice.\n";
        break;
    }

    return 0;
}