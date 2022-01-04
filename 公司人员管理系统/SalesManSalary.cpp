#include "SalesManSalary.h"


void SalesManSalary::setSalesVolume(double salesVolume) {
	this->salesVolume = salesVolume;
	setThisMonthSalary(salesVolume);
}

void SalesManSalary::setThisMonthSalary(double salesVolume) {
	this->thisMonthSalary = salesVolume * 0.2;		//提成百分比为20%
}

double SalesManSalary::getThisMonthSalary() {
	return this->thisMonthSalary;
}

void SalesManSalary::updateOldSalarySum() {
	double sum = getOldSalarySum() + getThisMonthSalary();
	setOldSalarySum(sum);
}

double SalesManSalary::getSalesVolume() {
	return this->salesVolume;
}