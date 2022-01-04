#pragma once
#include "Stuff.h"
#include "SalesManSalary.h"
class SalesMan :
    public Stuff
{
private:
    SalesManSalary salary;
public:
    SalesMan():Stuff(),salary() {}
    SalesMan(int id, string name, int level, int positionId) :Stuff(id, name, level, positionId),salary() {}
    void setSalesVolume(double salesVolume);
    void showInfo();

    void setOldSalarySum(double oldSalarySum); //���þ�н��
    void updateOldSalarySum();		//���µ�����ǰ����н�ܺ�
    SalesManSalary getSalary();
};
