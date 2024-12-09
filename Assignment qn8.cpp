#include <iostream>
using namespace std;

int main() {
    double purchaseAmount;

    // Get the purchase amount from the user
    cout << "Enter the total amount of purchase: ";
    cin >> purchaseAmount;

    // Apply discount based on the purchase amount
    if (purchaseAmount >= 1000) {
        purchaseAmount *= 0.80;  // 20% discount
    }
    else if (purchaseAmount >= 500) {
        purchaseAmount *= 0.90;  // 10% discount
    }
    else if (purchaseAmount >= 200) {
        purchaseAmount *= 0.95;  // 5% discount
    }

    // Output the total cost after discount
    cout << "Total cost after discount: $" << purchaseAmount << endl;

    return 0;
}