#pragma once
#include<vector>
#include "Manager.h"
#include "SalesMan.h"
#include "PartTimeTechnician.h"
#include "SalesManager.h"
class OperateTool
{
private:

public:
	//���ձ��������ʾ
	void showAllSortById(vector<Manager>& managerList, 
		vector<PartTimeTechnician>& partTimeTechnicianList, 
		vector<SalesMan>& salesmanList, 
		vector<SalesManager>& salesmanagerList);

	//���ձ�Ų���
	int selectById(int id, 
		vector<Manager>& managerList,
		vector<PartTimeTechnician>& partTimeTechnicianList,
		vector<SalesMan>& salesmanList,
		vector<SalesManager>& salesmanagerList);

	//������������
	vector<int> selectByName(string name,
		vector<Manager>& managerList,
		vector<PartTimeTechnician>& partTimeTechnicianList,
		vector<SalesMan>& salesmanList,
		vector<SalesManager>& salesmanagerList);

	//���ձ��ɾ��
	void deleteById(int id,
		vector<Manager>& managerList,
		vector<PartTimeTechnician>& partTimeTechnicianList,
		vector<SalesMan>& salesmanList,
		vector<SalesManager>& salesmanagerList);

	//��������ɾ��
	int deleteByName(string name,
		vector<Manager>& managerList,
		vector<PartTimeTechnician>& partTimeTechnicianList,
		vector<SalesMan>& salesmanList,
		vector<SalesManager>& salesmanagerList);

	//���ӳ�Ա
	void addMember(int id, string name, int level, int positionId,
		vector<Manager>& managerList,
		vector<PartTimeTechnician>& partTimeTechnicianList,
		vector<SalesMan>& salesmanList,
		vector<SalesManager>& salesmanagerList, int workTime = 0, int salesVolume = 0);

	//��ְ����
	int upgradeLevel(int id,
		vector<Manager>& managerList,
		vector<PartTimeTechnician>& partTimeTechnicianList,
		vector<SalesMan>& salesmanList,
		vector<SalesManager>& salesmanagerList);
};

