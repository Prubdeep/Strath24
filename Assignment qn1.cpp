#include <iostream>
#include <string>
using namespace std;

void PrubdeepLoanCalculator() {
    int age, monthAsCustomer;
    double bankBalance;
    string crbStatus;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your bank balance: ";
    cin >> bankBalance;

    cout << "Enter your CRB Status (good or bad): ";
    cin >> crbStatus;
 
    cout << "Enter the number of months you have been a customer: ";
    cin >> monthAsCustomer;

    if (age > 22 && bankBalance > 50000 && crbStatus == "good" && monthAsCustomer > 6) {
        cout << "You are qualified for a loan." << endl;
    }
    else {
        cout << "Sorry, you do not qualify for a loan." << endl;
    }
}

int main() {
    PrubdeepLoanCalculator();
    return 0;
}