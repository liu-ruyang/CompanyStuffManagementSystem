#pragma once
class Salary
{
private:
	double 	oldSalarySum;		//当月以前的月薪总额
public:
	Salary();
	void setOldSalarySum(double oldSalarySum); 			//设置当月以前的月薪总额
	double getOldSalarySum();				//获取当月以前的月薪总额
};