#pragma once
#include "Stuff.h"
#include "ManagerSalary.h"

class Manager :
    public Stuff
{
private:
    ManagerSalary salary;
public:
    Manager():Stuff(),salary() {}
    Manager(int id, string name, int level, int positionId) :Stuff(id, name, level, positionId), salary() {}
    void showInfo();
    ManagerSalary getSalary();

    void setOldSalarySum(double oldSalarySum); 			//设置当月以前的月薪总额
    void updateOldSalarySum();
};
