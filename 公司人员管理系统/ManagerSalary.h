#pragma once
#include "Salary.h"
class ManagerSalary :
	public Salary
{
private:
	double thisMonthSalary;     //当月薪资
	double fixedMonthSalary;    //固定月薪
	void setThisMonthSalary(); 		//设置当月工资
public:
	ManagerSalary();		//构造函数
	double getThisMonthSalary();	//得到当月薪资
	void updateOldSalarySum();		//更新当月以前的月薪总和
	double getFixedMonthSalary();	//得到固定月薪
};
