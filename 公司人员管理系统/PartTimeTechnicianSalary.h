#pragma once
#include "Salary.h"
class PartTimeTechnicianSalary :
	public Salary
{
private:
	int workTime;				//工时
	double thisMonthSalary;		//当月工资
	void setThisMonthSalary(int workTime); 		//设置当月工资

public:
	void setWorkTime(int workTime);		//初始化当月的工时
	double getThisMonthSalary();		//得到当月的薪资
	void updateOldSalarySum();		//更新当月以前的月薪总和
	int getWorkTime();
};
