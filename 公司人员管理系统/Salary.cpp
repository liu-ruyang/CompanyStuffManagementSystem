
#include "Salary.h"
#include <iostream>
using namespace std;
Salary::Salary() {
	//cout << "Salary³õÊ¼»¯";
	this->oldSalarySum = 0;
}
void Salary::setOldSalarySum(double oldSalarySum) {
	this->oldSalarySum = oldSalarySum;
}

double Salary::getOldSalarySum() {
	return this->oldSalarySum;
}