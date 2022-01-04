#pragma once
#include "Stuff.h"
#include "PartTimeTechnicianSalary.h"
class PartTimeTechnician :
	public Stuff
{
private:
	PartTimeTechnicianSalary salary;
public:
	PartTimeTechnician():Stuff(),salary() {}
	PartTimeTechnician(int id, string name, int level, int positionId) :Stuff(id, name, level, positionId), salary() {}
	void setWorkTime(int workTime);
	void showInfo();

	void setOldSalarySum(double oldSalarySum); //设置旧薪资
	void updateOldSalarySum();		//更新当月以前的月薪总和
	PartTimeTechnicianSalary getSalary();
};
