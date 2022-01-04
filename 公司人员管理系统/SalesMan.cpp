#include "SalesMan.h"
#include<iostream>

void SalesMan::setSalesVolume(double salesVolume) {
	this->salary.setSalesVolume(salesVolume);
}

void SalesMan::showInfo() {
	cout << getId() << "\t\t" << getName() << "\t\t"
		<< getLevel() << "\t\t" << "ÍÆÏúÔ±" << "\t\t"
		<< salary.getThisMonthSalary() << "\t\t" << salary.getOldSalarySum()
		<< endl;
}

void SalesMan::setOldSalarySum(double oldSalarySum) {
	this->salary.setOldSalarySum(oldSalarySum);
	this->updateOldSalarySum();
}

void SalesMan::updateOldSalarySum() {
	this->salary.updateOldSalarySum();
}

SalesManSalary SalesMan::getSalary() {
	return this->salary;
}