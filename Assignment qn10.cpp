#include <iostream>
using namespace std;

int main() {
    double balance = 100000;  //balance
    double limit = 5000;     //withdrawal limit
    double withdrawal;

    cout << "Enter amount you want to withdraw: ";
    cin >> withdrawal;

    if (withdrawal > balance) {
        cout << "Insufficient funds." << endl;
    }
    else if (withdrawal > limit) {
        cout << "You have reached your daily limit." << endl;
    }
    else {
        balance -= withdrawal;
        cout << "Withdrawal successful! New balance: $" << balance << endl;
    }

    return 0;
}