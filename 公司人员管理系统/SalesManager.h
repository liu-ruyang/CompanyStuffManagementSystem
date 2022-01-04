#pragma once
#include "Stuff.h"
#include "SalesManagerSalary.h"
class SalesManager :
    public Stuff
{
private:
    SalesManagerSalary salary;
public:
    SalesManager():Stuff(),salary() {}
    SalesManager(int id, string name, int level, int positionId) :Stuff(id, name, level, positionId), salary() {}
    void setSalesVolume(double salesVolume);
    void showInfo();
    SalesManagerSalary getSalary();

    void setOldSalarySum(double oldSalarySum); //…Ë÷√æ…–Ω◊ 
    void updateOldSalarySum();
};
