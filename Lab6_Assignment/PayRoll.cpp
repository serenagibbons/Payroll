#include "PayRoll.h"

PayRoll::PayRoll() {				// Default constructor
	payRate = 0;
	hours = 0;
	netPay = 0;
}

void PayRoll::setPayRate(double payrt) {
	payRate = payrt;
}

void PayRoll::setHours(double hrs) {
	hours = hrs;
}

void PayRoll::setNetPay(double payrt, double hrs) {
	netPay = payrt * hrs * 0.8;		// Net pay after 20% tax deduction
}

double PayRoll::getNetPay() {
	return netPay;
}