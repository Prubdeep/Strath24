#include <iostream>
using namespace std;

int main() {
    int age;
    string movieType;
    double ticketPrice;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter movie type (regular or 3D): ";
    cin >> movieType;

    if (movieType == "3D") {
        if (age < 12) ticketPrice = 800;  // Child 
        else if (age <= 60) ticketPrice = 1400;  // Adult 
        else ticketPrice = 1100;  // Senior 
    } 
    else if (movieType == "regular") {
        if (age < 12) ticketPrice = 500;  // Child 
        else if (age <= 60) ticketPrice = 900;  // Adult 
        else ticketPrice = 650;  // Senior 
    } 
    else {
        cout << "Invalid movie type." << endl;
        return 0;  
    }


    cout << "Ticket price: " << ticketPrice << endl;

    return 0;
}