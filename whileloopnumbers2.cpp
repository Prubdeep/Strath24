#include <iostream>
using namespace std;

int main() {
    int start = 20; 
    int end = 25;   
    int sum = 0;

    while (start <= end) {s
        sum += start; 
        start++;      // Moves to the next number
    }

    cout << "The sum of whole numbers from 20 to 25 is: " << sum << endl;

    return 0;
}