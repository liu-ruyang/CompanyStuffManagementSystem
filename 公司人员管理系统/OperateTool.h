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
	//按照编号排序显示
	void showAllSortById(vector<Manager>& managerList, 
		vector<PartTimeTechnician>& partTimeTechnicianList, 
		vector<SalesMan>& salesmanList, 
		vector<SalesManager>& salesmanagerList);

	//按照编号查找
	int selectById(int id, 
		vector<Manager>& managerList,
		vector<PartTimeTechnician>& partTimeTechnicianList,
		vector<SalesMan>& salesmanList,
		vector<SalesManager>& salesmanagerList);

	//按照姓名查找
	vector<int> selectByName(string name,
		vector<Manager>& managerList,
		vector<PartTimeTechnician>& partTimeTechnicianList,
		vector<SalesMan>& salesmanList,
		vector<SalesManager>& salesmanagerList);

	//按照编号删除
	void deleteById(int id,
		vector<Manager>& managerList,
		vector<PartTimeTechnician>& partTimeTechnicianList,
		vector<SalesMan>& salesmanList,
		vector<SalesManager>& salesmanagerList);

	//按照姓名删除
	int deleteByName(string name,
		vector<Manager>& managerList,
		vector<PartTimeTechnician>& partTimeTechnicianList,
		vector<SalesMan>& salesmanList,
		vector<SalesManager>& salesmanagerList);

	//增加成员
	void addMember(int id, string name, int level, int positionId,
		vector<Manager>& managerList,
		vector<PartTimeTechnician>& partTimeTechnicianList,
		vector<SalesMan>& salesmanList,
		vector<SalesManager>& salesmanagerList, int workTime = 0, int salesVolume = 0);

	//升职管理
	int upgradeLevel(int id,
		vector<Manager>& managerList,
		vector<PartTimeTechnician>& partTimeTechnicianList,
		vector<SalesMan>& salesmanList,
		vector<SalesManager>& salesmanagerList);
};

