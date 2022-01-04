#include "PartTimeTechnicianSalary.h"

void PartTimeTechnicianSalary::setWorkTime(int workTime) {
	this->workTime = workTime;
	setThisMonthSalary(workTime);
}

void PartTimeTechnicianSalary::setThisMonthSalary(int workTime) {
	double thisMonthSalary = 20.0 * workTime;		//20元/时
	this->thisMonthSalary = thisMonthSalary;
}

double PartTimeTechnicianSalary::getThisMonthSalary() {
	return this->thisMonthSalary;
}

void PartTimeTechnicianSalary::updateOldSalarySum() {
	double sum = getThisMonthSalary() + getOldSalarySum();
	setOldSalarySum(sum);
}

int PartTimeTechnicianSalary::getWorkTime() {
	return this->workTime;
}
