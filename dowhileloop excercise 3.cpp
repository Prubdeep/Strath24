#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    cout << "Enter integers to sum (enter 0 to stop):" << endl;

    do {
        cin >> number;  
        sum += number;  
    } while (number != 0); // Continue until the user enters 0

    cout << "The total sum is: " << sum << endl;

    return 0;
}