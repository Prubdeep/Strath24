#include <iostream>
#include <string>
using namespace std;

int main() {
	int score;
	string fullName;

	//Ask user to enter full name
	cout << "Enter your full name: ";
	getline(cin, fullName);

	//Ask user to enter their score
	cout << "Enter your score: ";
	cin >> score;

	if (score >=70) {
		cout << "Grade A";
	}
	else if (score >=60) {
		cout << "Grade B";
	}
	else if (score >=50) {
		cout << "Grade C";
	}
	else if (score >=40) {
		cout << "Grade D";
	}
	else if (score <40) {
		cout << "Grade F";
	}
	else {
		cout << "Invalid Score";
	}
 }
	

