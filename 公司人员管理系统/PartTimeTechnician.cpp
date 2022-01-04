#include "PartTimeTechnician.h"
#include<iostream>


void PartTimeTechnician::setWorkTime(int workTime) {
	this->salary.setWorkTime(workTime);
}

void PartTimeTechnician::showInfo() {
	cout << getId() << "\t\t" << getName() << "\t\t"
		<< getLevel() << "\t\t" << "兼职技术人员" << "\t"
		<< salary.getThisMonthSalary() << "\t\t" << salary.getOldSalarySum()
		<< endl;
}

void PartTimeTechnician::setOldSalarySum(double oldSalarySum) {
	this->salary.setOldSalarySum(oldSalarySum);
	this->updateOldSalarySum();
}

void PartTimeTechnician::updateOldSalarySum() {
	this->salary.updateOldSalarySum();
}

PartTimeTechnicianSalary PartTimeTechnician::getSalary() {
	return this->salary;
}