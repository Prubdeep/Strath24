#include <iostream>
using namespace std;

int main() {
    int lightState = 0;

    while (true) {
        if (lightState == 0) {
            cout << "RED\n";
            lightState = 1;
        }
        else if (lightState == 1) {
            cout << "YELLOW\n";
            lightState = 2;
        }
        else {
            cout << "GREEN\n";
            lightState = 0;
        }
    }

    return 0;
}