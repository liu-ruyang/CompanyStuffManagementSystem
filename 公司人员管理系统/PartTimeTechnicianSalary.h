#pragma once
#include "Salary.h"
class PartTimeTechnicianSalary :
	public Salary
{
private:
	int workTime;				//��ʱ
	double thisMonthSalary;		//���¹���
	void setThisMonthSalary(int workTime); 		//���õ��¹���

public:
	void setWorkTime(int workTime);		//��ʼ�����µĹ�ʱ
	double getThisMonthSalary();		//�õ����µ�н��
	void updateOldSalarySum();		//���µ�����ǰ����н�ܺ�
	int getWorkTime();
};
