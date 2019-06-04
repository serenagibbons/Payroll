#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "PayRoll.h"
using namespace std;

const int NUM_EMPS = 11;

int main() {
	ifstream inFile("payroll.dat");
	PayRoll payroll[NUM_EMPS];		// Define an array of payroll objects
	double hrs;
	double payrt;

	string dash;					// Use for payroll output
	dash.assign(35, '-');

	if (!inFile) {					// Check for date input file
		cout << "Error opening file.\n";
	}
	else {
		cout << "Payroll\n" << dash << endl;
		// Loop to read and store hours and pay rate information from file into payroll objects
		for (int i = 0; i < NUM_EMPS; i++) {
			inFile >> hrs;
			payroll[i].setHours(hrs);

			inFile >> payrt;
			payroll[i].setPayRate(payrt);

			// Calculate and store net pay
			payroll[i].setNetPay(payrt, hrs);

			// Display employee's net pay
			cout << fixed << showpoint << setprecision(2);
			cout << "Employee " << setw(2) << (i + 1) << " Net Pay is: $" << setw(6) << payroll[i].getNetPay() << endl;
		}
	}

	inFile.close();

	system("pause");
	return 0;
}