#include "Manager.h"
#include <iostream>

void Manager::showInfo() {
	cout << getId() << "\t\t" << getName() << "\t\t"
		<< getLevel() << "\t\t" << "¾­Àí" << "\t\t"
		<< salary.getThisMonthSalary() << "\t\t" << salary.getOldSalarySum()
		<< endl;
}

ManagerSalary Manager::getSalary() {
	return this->salary;
}


void Manager::setOldSalarySum(double oldSalarySum) {
	this->salary.setOldSalarySum(oldSalarySum);
	this->updateOldSalarySum();
}

void Manager::updateOldSalarySum() {
	this->salary.updateOldSalarySum();
}