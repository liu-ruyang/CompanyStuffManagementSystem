
#include "ManagerSalary.h"

ManagerSalary::ManagerSalary() {
	this->fixedMonthSalary = 5000;		//固定月薪为5000元
	setThisMonthSalary();
}

void ManagerSalary::setThisMonthSalary() {
	this->thisMonthSalary = fixedMonthSalary;
}

double ManagerSalary::getThisMonthSalary() {
	return this->thisMonthSalary;
}

void ManagerSalary::updateOldSalarySum() {
	setOldSalarySum(getOldSalarySum() + getThisMonthSalary());
}

double ManagerSalary::getFixedMonthSalary() {
	return this->fixedMonthSalary;
}