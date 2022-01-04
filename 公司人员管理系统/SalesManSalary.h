#pragma once
#include "Salary.h"
class SalesManSalary :
    public Salary
{
private:
    double thisMonthSalary;
    double salesVolume;        //销售额
    void setThisMonthSalary(double salesVolume); 		//设置当月工资
public:
    void setSalesVolume(double salesVolume);        //设置销售额
    double getThisMonthSalary();                    //获取当月薪资
    void updateOldSalarySum();		//更新当月以前的月薪总和
    double getSalesVolume();
};
