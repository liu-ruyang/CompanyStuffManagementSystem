#include "SalesManager.h"
#include<iostream>


void SalesManager::setSalesVolume(double salesVolume) {
	this->salary.setSalesVolume(salesVolume);
}

void SalesManager::showInfo() {
	cout << getId() << "\t\t" << getName() << "\t\t"
		<< getLevel() << "\t\t" << "销售经理" << "\t"
		<< salary.getThisMonthSalary() << "\t\t" << salary.getOldSalarySum()
		<< endl;
}

SalesManagerSalary SalesManager::getSalary() {
	return this->salary;
}

void SalesManager::setOldSalarySum(double oldSalarySum) {
	this->salary.setOldSalarySum(oldSalarySum);
	this->updateOldSalarySum();
}

void SalesManager::updateOldSalarySum() {
	this->salary.updateOldSalarySum();
}