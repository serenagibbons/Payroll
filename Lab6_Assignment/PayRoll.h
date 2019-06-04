#ifndef PAYROLL_H
#define PAYROLL_H

#include <iostream>
using namespace std;

class PayRoll {
private:
	double payRate;		// Employee's hourly pay rate
	double hours;		// Employee's number of hours worked
	double netPay;		// Employee's payrate * hours - 20% tax deduction

public:
	PayRoll();
	void setPayRate(double payrt);
	void setHours(double hrs);
	void setNetPay(double payrt, double hrs);
	double getNetPay();
};

#endif // !PAYROLL_H