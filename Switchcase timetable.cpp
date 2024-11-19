#include <iostream>
using namespace std;
int main() {
	int opt;

	cout << "Hi.This is your BBIT Sem 1 Timetable (May-Aug 2024)";
	cout << "\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday" << endl << endl;
	cout << "Please select day of choice (e.g. 1, 2, 3, 4 etc...)" << endl;
	cin >> opt;

	switch (opt) {
	case 1:
		cout << "Monday Classes\n.........." << endl;
		cout << "\t1. BBIT 1106: Math for Biz" << endl;
		cout << "\t2. BBIT 1102: Intro to Programming" << endl;
		break;

	case 2:
		cout << "Tuesday Classes\n.........." << endl;
		cout << "\t1. BBIT 1102: Intro to Programming" << endl;
		cout << "\t2. BBIT 1104: Ethics" << endl;
		break;

	case 3:
		cout << "Wednesday Classes\n.........." << endl;
		cout << "\t1. BBIT 1105: Fundamentals of Accounting" << endl;
		cout << "\t2. BBIT 1106: Math for Biz" << endl;
		break;

	case 4:
		cout << "Thursday Classes\n.........." << endl;
		cout << "\t1. BBIT 1106: Communication skills" << endl;
		cout << "\t2. BBIT 1102: Ethics" << endl;
		break;

	case 5:
		cout << "Monday Classes\n.........." << endl;
		cout << "\t1. BBIT 1106: Communication skills" << endl;
		cout << "\t2. BBIT 1102: Fundamentals of IT" << endl;
		break;

	default:
		cout << "Invalid Input";
	}
	return 0;
}