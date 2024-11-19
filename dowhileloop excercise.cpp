#include <iostream>
using namespace std;

int main() {
    int num = 12;

    do {
        cout << num << " ";
        num += 2;
    } while (num <= 50);

    cout << endl; // End with a new line
    return 0;
}
