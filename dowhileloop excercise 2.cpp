#include <iostream>
using namespace std;

int main() {
    int start = 20; //Starting number
    int end = 25;   //Ending number
    int sum = 0;

    do {
        sum += start; 
        start++;      
    } while (start <= end); 

    cout << "The sum of numbers from 20 to 25 is: " << sum << endl;

    return 0;
}