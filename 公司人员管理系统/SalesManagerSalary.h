#pragma once
#include "Salary.h"
class SalesManagerSalary :
    public Salary
{
private:
    double thisMonthSalary;
    double salesVolume;
    double fixedMonthSalary;
    void setThisMonthSalary(double salesVolume);
public:
    SalesManagerSalary();
    void setSalesVolume(double salesVolume);
    double getThisMonthSalary();
    void updateOldSalarySum();
    double getFixedMonthSalary();
    double getSalesVolume();
};
