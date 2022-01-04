#include "SalesManagerSalary.h"


SalesManagerSalary::SalesManagerSalary() {
	this->fixedMonthSalary = 7000;
}

void SalesManagerSalary::setSalesVolume(double salesVolume) {
	this->salesVolume = salesVolume;
	setThisMonthSalary(salesVolume);
}

void SalesManagerSalary::setThisMonthSalary(double salesVolume) {
	this->thisMonthSalary = this->fixedMonthSalary + salesVolume * 0.4;
}

double SalesManagerSalary::getThisMonthSalary() {
	return this->thisMonthSalary;
}

void SalesManagerSalary::updateOldSalarySum() {
	double sum = getOldSalarySum() + getThisMonthSalary();
	setOldSalarySum(sum);
}

double SalesManagerSalary::getFixedMonthSalary() {
	return this->fixedMonthSalary;
}

double SalesManagerSalary::getSalesVolume() {
	return this->salesVolume;
}