#include <iostream>
#include <string>
using namespace std;

int main() {
	int age;
	string interest;

	//Ask user for age
	cout << "Enter child's age: ";
	cin >> age;

	if (age < 4 || age > 10) {
		cout << "Sorry, age must be between 4 years and 10 years" << endl;
	}

	//Ask for childs interest
	cout << "Enter your child's interest (soccer, art, music, athletics, toys): ";
	cin >> interest;

	if (interest == "soccer") {
		cout << "Assign to Soccer play group" << endl;
	}
	else if (interest == "art") {
		cout << "Assign to Art play group" << endl;
	}
	else if (interest == "music"){
		cout << "Assign to Music play group" << endl;
	}
	else if (interest == "athletics") {
		cout << "Assign to athletics play group" << endl;
	}
	else if (interest == "toys") {
		cout << "Assign to toys play group" << endl;
	}
	return 0;
}