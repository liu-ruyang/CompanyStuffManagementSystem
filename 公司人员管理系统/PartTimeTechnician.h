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

	void setOldSalarySum(double oldSalarySum); //���þ�н��
	void updateOldSalarySum();		//���µ�����ǰ����н�ܺ�
	PartTimeTechnicianSalary getSalary();
};
