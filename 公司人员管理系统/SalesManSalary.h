#pragma once
#include "Salary.h"
class SalesManSalary :
    public Salary
{
private:
    double thisMonthSalary;
    double salesVolume;        //���۶�
    void setThisMonthSalary(double salesVolume); 		//���õ��¹���
public:
    void setSalesVolume(double salesVolume);        //�������۶�
    double getThisMonthSalary();                    //��ȡ����н��
    void updateOldSalarySum();		//���µ�����ǰ����н�ܺ�
    double getSalesVolume();
};
