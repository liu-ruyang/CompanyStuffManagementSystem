#pragma once
#include "Salary.h"
class ManagerSalary :
	public Salary
{
private:
	double thisMonthSalary;     //����н��
	double fixedMonthSalary;    //�̶���н
	void setThisMonthSalary(); 		//���õ��¹���
public:
	ManagerSalary();		//���캯��
	double getThisMonthSalary();	//�õ�����н��
	void updateOldSalarySum();		//���µ�����ǰ����н�ܺ�
	double getFixedMonthSalary();	//�õ��̶���н
};
