#include <iostream>
#include <string>
using namespace std;;

int main() {
	int age, monthAsCustomer;
	double bankBalance;
	string crbStatus;

	//Prompt user for age
	cout << "Enter your age: ";
	cin >> age;

	//Ask user for bank balance
	cout << "Enter your bank balance: ";
	cin >> bankBalance;

	//Ask user for CRBStatus whether good or bad
	cout << "Enter your CRB Status (good or bad): ";
	cin >> crbStatus;

	//Ask user how many months they have been a customer
	cout << "Enter the amount of months you have been a customer: ";
	cin >> monthAsCustomer;

	//check loam qualification
	if (age > 22 && bankBalance > 50000 && crbStatus == "good" && monthAsCustomer > 6) {
		cout << "You are qualified for a loan." << endl;
	}
	else
	{
		cout << "Sorry, You do not qualify for a loan." << endl;
	}
	return 0;

}