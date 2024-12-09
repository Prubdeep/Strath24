#include <iostream>
using namespace std;

int main() {
	int age;
	cout << "Please enter the age: ";
	cin >> age;
	if (age >= 7) {
		cout << "Admit to Grade school";
	}
	else if (age >= 5) {
		cout << "Admit to kindergarten";
	}
	else if (age >= 3) {
		cout << "Admit to pre-school";
	}
	else if (age >= 1) {
		cout << "Admit to play group";
	}
	else {
		cout << "Reject";
	}
	return 0;
	}

