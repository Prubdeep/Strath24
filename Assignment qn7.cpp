#include <iostream>
using namespace std;

int main() {
    int daysLate;
    string bookType;
    double fine = 0.0;

    // Get user input
    cout << "Enter the number of days the book is late: ";
    cin >> daysLate;
    cout << "Enter the book type (regular, children's, reference): ";
    cin >> bookType;

    // Calculate fine based on the book type and days late
    if (daysLate > 0) {
        if (bookType == "regular") {
            fine = daysLate * 0.70;
        }
        else if (bookType == "children's") {
            fine = daysLate * 0.50;
        }
        else if (bookType == "reference") {
            fine = daysLate * 2.00;
        }
        else {
            cout << "Invalid book type." << endl;
            return 0; // Exit program if invalid type
        }

        cout << "The fine is: $" << fine << endl;
    }
    else {
        cout << "Book returned in time therefore no fine. " << endl;
    }

    return 0;
}