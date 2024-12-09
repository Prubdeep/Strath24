#include <iostream>
using namespace std;
int main() {
    int age;
    string interest, interest2, name;
    cout << "Please enter the child's name: ";
    cin >> name;
    cout << "Please enter the child's age: ";
    cin >> age;
    if (age >= 4 && age <= 10) {//begin primary if
        cout << "Please enter interest: ";
        cin >> interest;
        if (interest == "soccer") {//Begin nested if
            cout << name << " should be admitted and assigned the Soccer Play Group";
        }
        if (interest == "art") {
            cout << name << "should be Admitted and assigned the Art group";
        }
        else {
            cout << "Admit to other group";
        }//End of nested if
    }
    else {
        cout << "Admission Unsuccessful. Age is invalid";
    }//end of primary if
    return 0;
}


