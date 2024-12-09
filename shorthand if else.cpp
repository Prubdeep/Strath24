#include <iostream>
using namespace std;

int main()
{
    double mark;
    cout << "Please input mark: ";
    cin >> mark;
    string message = (mark = 50) ? "Passed" : "Failed";
    cout << message;
    return 0;
}
