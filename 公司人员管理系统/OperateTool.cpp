#include "OperateTool.h"
#include<iostream>
using namespace std;

void OperateTool::showAllSortById(vector<Manager>& managerList,
	vector<PartTimeTechnician>& partTimeTechnicianList,
	vector<SalesMan>& salesmanList,
	vector<SalesManager>& salesmanagerList) {
	cout << "编号ID" << "\t\t" << "姓名" << "\t\t" << "级别" << "\t\t" << "职称"<<"\t\t"
		<< "本月薪水" << "\t" << "月薪总额" << endl;

	int index;
	int j1 = 0, j2 = 0, j3 = 0, j4 = 0;
	int a, b, c, d;

	//四个vector中都有剩余对象
	for (; j1 < managerList.size() && j2 < partTimeTechnicianList.size() && j3 < salesmanList.size() && j4 < salesmanagerList.size(); ) {
		managerList[j1].getId() < partTimeTechnicianList[j2].getId() ?
			(managerList[j1].getId() < salesmanList[j3].getId() ?
				(managerList[j1].getId() < salesmanagerList[j4].getId() ?
					managerList[j1++].showInfo() : salesmanagerList[j4++].showInfo()) :
				(salesmanList[j3].getId() < salesmanagerList[j4].getId() ?
					salesmanList[j3++].showInfo() : salesmanagerList[j4++].showInfo())) :
			(partTimeTechnicianList[j2].getId() < salesmanList[j3].getId() ?
				(partTimeTechnicianList[j2].getId() < salesmanagerList[j4].getId() ?
					partTimeTechnicianList[j2++].showInfo() : salesmanagerList[j4++].showInfo()) :
				(salesmanList[j3].getId() < salesmanagerList[j4].getId() ?
					salesmanList[j3++].showInfo() : salesmanagerList[j4++].showInfo()));
	}

	//三个vector中有剩余对象
	for (; j1 < managerList.size() && j2 < partTimeTechnicianList.size() && j3 < salesmanList.size(); ) {
		managerList[j1].getId() < partTimeTechnicianList[j2].getId() ?
			(managerList[j1].getId() < salesmanList[j3].getId() ?
				managerList[j1++].showInfo() : salesmanList[j3++].showInfo()) :
			(partTimeTechnicianList[j2].getId() < salesmanList[j3].getId() ?
				partTimeTechnicianList[j2++].showInfo() : salesmanList[j3++].showInfo());
	}

	//三个vector中有剩余对象
	for (; j1 < managerList.size() && j2 < partTimeTechnicianList.size() && j4 < salesmanagerList.size(); ) {
		managerList[j1].getId() < partTimeTechnicianList[j2].getId() ?
			(managerList[j1].getId() < salesmanagerList[j4].getId() ?
				managerList[j1++].showInfo() : salesmanagerList[j4++].showInfo()) :
			(partTimeTechnicianList[j2].getId() < salesmanagerList[j4].getId() ?
				partTimeTechnicianList[j2++].showInfo() : salesmanagerList[j4++].showInfo());
	}

	//三个vector中有剩余对象
	for (; j1 < managerList.size() && j3 < salesmanList.size() && j4 < salesmanagerList.size(); ) {
		managerList[j1].getId() < salesmanList[j3].getId() ?
			(managerList[j1].getId() < salesmanagerList[j4].getId() ?
				managerList[j1++].showInfo() : salesmanagerList[j4++].showInfo()) :
			(salesmanList[j3].getId() < salesmanagerList[j4].getId() ?
				salesmanList[j3++].showInfo() : salesmanagerList[j4++].showInfo());
	}

	//三个vector中有剩余对象
	for (; j2 < partTimeTechnicianList.size() && j3 < salesmanList.size() && j4 < salesmanagerList.size(); ) {
		partTimeTechnicianList[j2].getId() < salesmanList[j3].getId() ?
			(partTimeTechnicianList[j2].getId() < salesmanagerList[j4].getId() ?
				partTimeTechnicianList[j2++].showInfo() : salesmanagerList[j4++].showInfo()) :
			(salesmanList[j3].getId() < salesmanagerList[j4].getId() ?
				salesmanList[j3++].showInfo() : salesmanagerList[j4++].showInfo());
	}

	//两个vector中有剩余对象
	for (; j1 < managerList.size() && j2 < partTimeTechnicianList.size();) {
		managerList[j1].getId() < partTimeTechnicianList[j2].getId() ?
			managerList[j1++].showInfo() : partTimeTechnicianList[j2++].showInfo();
	}

	//两个vector中有剩余对象
	for (; j1 < managerList.size() && j3 < salesmanList.size();) {
		managerList[j1].getId() < salesmanList[j3].getId() ?
			managerList[j1++].showInfo() : salesmanList[j3++].showInfo();
	}

	//两个vector中有剩余对象
	for (; j1 < managerList.size() && j4 < salesmanagerList.size();) {
		managerList[j1].getId() < salesmanagerList[j4].getId() ?
			managerList[j1++].showInfo() : salesmanagerList[j4++].showInfo();
	}

	//两个vector中有剩余对象
	for (; j2 < partTimeTechnicianList.size() && j3 < salesmanList.size();) {
		partTimeTechnicianList[j2].getId() < salesmanList[j3].getId() ?
			partTimeTechnicianList[j2++].showInfo() : salesmanList[j3++].showInfo();
	}

	//两个vector中有剩余对象
	for (; j2 < partTimeTechnicianList.size() && j4 < salesmanagerList.size();) {
		partTimeTechnicianList[j2].getId() < salesmanagerList[j4].getId() ?
			partTimeTechnicianList[j2++].showInfo() : salesmanagerList[j4++].showInfo();
	}

	//两个vector中有剩余对象
	for (; j3 < salesmanList.size() && j4 < salesmanagerList.size();) {
		salesmanList[j3].getId() < salesmanagerList[j4].getId() ?
			salesmanList[j3++].showInfo() : salesmanagerList[j4++].showInfo();
	}

	//一个vector中有剩余对象
	for (; j1 < managerList.size();) {
		managerList[j1++].showInfo();
	}

	//一个vector中有剩余对象
	for (; j2 < partTimeTechnicianList.size();) {
		partTimeTechnicianList[j2++].showInfo();
	}

	//一个vector中有剩余对象
	for (; j3 < salesmanList.size();) {
		salesmanList[j3++].showInfo();
	}

	//一个vector中有剩余对象
	for (; j4 < salesmanagerList.size();) {
		salesmanagerList[j4++].showInfo();
	}

	if (j1 == 0 && j2 == 0 && j3 == 0 && j4 == 0) {
		cout << "数据为空。" << endl;
	}

}

int OperateTool::selectById(int id,
	vector<Manager>& managerList,
	vector<PartTimeTechnician>& partTimeTechnicianList,
	vector<SalesMan>& salesmanList,
	vector<SalesManager>& salesmanagerList) {
	for (auto it = managerList.begin(); it != managerList.end(); it++) {
		if ((*it).getId() == id)
		{
			(*it).showInfo();
			return 1;
		}
	}

	for (auto it = partTimeTechnicianList.begin(); it != partTimeTechnicianList.end(); it++) {
		if ((*it).getId() == id)
		{
			(*it).showInfo();
			return 1;
		}
	}

	for (auto it = salesmanList.begin(); it != salesmanList.end(); it++) {
		if ((*it).getId() == id)
		{
			(*it).showInfo();
			return 1;
		}
	}

	for (auto it = salesmanagerList.begin(); it != salesmanagerList.end(); it++) {
		if ((*it).getId() == id)
		{
			(*it).showInfo();
			return 1;
		}
	}
	cout << "查询结果为空！" << endl;
	return 0;
}

void OperateTool::deleteById(int id,
	vector<Manager>& managerList,
	vector<PartTimeTechnician>& partTimeTechnicianList,
	vector<SalesMan>& salesmanList,
	vector<SalesManager>& salesmanagerList) {
	int result = selectById(id, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);

	if (result)
	{
		cout << "确定删除?" << "（输入1确定，输入0取消）" << endl;
		cout << "请输入：";
		int choose;
		cin >> choose;
		if (choose == 1)
		{
			for (auto it = managerList.begin(); it != managerList.end(); it++) {
				if ((*it).getId() == id)
				{
					managerList.erase(it);
					cout << "已删除。" << endl;
					break;
				}
			}
			for (auto it = partTimeTechnicianList.begin(); it != partTimeTechnicianList.end(); it++) {
				if ((*it).getId() == id)
				{
					partTimeTechnicianList.erase(it);
					cout << "已删除。" << endl;
					break;
				}
			}
			for (auto it = salesmanList.begin(); it != salesmanList.end(); it++) {
				if ((*it).getId() == id)
				{
					salesmanList.erase(it);
					cout << "已删除。" << endl;
					break;
				}
			}
			for (auto it = salesmanagerList.begin(); it != salesmanagerList.end(); it++) {
				if ((*it).getId() == id)
				{
					salesmanagerList.erase(it);
					cout << "已删除。" << endl;
					break;
				}
			}
		}
		else if (choose == 0)
		{
			cout << "操作已取消。" << endl;
		}
		else
		{
			cout << "输入不合法，已返回。" << endl;
		}
	}
}

vector<int> OperateTool::selectByName(string name,
	vector<Manager>& managerList,
	vector<PartTimeTechnician>& partTimeTechnicianList,
	vector<SalesMan>& salesmanList,
	vector<SalesManager>& salesmanagerList) {

	vector<int> result;
	for (auto it = managerList.begin(); it != managerList.end(); it++) {
		if ((*it).getName() == name)
		{
			(*it).showInfo();
			result.push_back((*it).getId());
		}
	}

	for (auto it = partTimeTechnicianList.begin(); it != partTimeTechnicianList.end(); it++) {
		if ((*it).getName() == name)
		{
			(*it).showInfo();
			result.push_back((*it).getId());
		}
	}

	for (auto it = salesmanList.begin(); it != salesmanList.end(); it++) {
		if ((*it).getName() == name)
		{
			(*it).showInfo();
			result.push_back((*it).getId());
		}
	}

	for (auto it = salesmanagerList.begin(); it != salesmanagerList.end(); it++) {
		if ((*it).getName() == name)
		{
			(*it).showInfo();
			result.push_back((*it).getId());
		}
	}

	if (result.size() <= 0) {
		cout << "查询结果为空！" << endl;
	}
	return result;
}

int OperateTool::deleteByName(string name,
	vector<Manager>& managerList,
	vector<PartTimeTechnician>& partTimeTechnicianList,
	vector<SalesMan>& salesmanList,
	vector<SalesManager>& salesmanagerList) {

	vector<int> templist = selectByName(name, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
	if (templist.size() > 0)
	{


		int choose;
		cout << "确定删除全部？（输入1确定，输入0取消）" << endl;
		cout << "请输入：";
		cin >> choose;
		if (choose == 1)
		{
			for (auto target = templist.begin(); target != templist.end(); target++) {
				int id = (*target);
				for (auto it = managerList.begin(); it != managerList.end(); it++) {
					if ((*it).getId() == id)
					{
						managerList.erase(it);
						break;
					}
				}
				for (auto it = partTimeTechnicianList.begin(); it != partTimeTechnicianList.end(); it++) {
					if ((*it).getId() == id)
					{
						partTimeTechnicianList.erase(it);
						break;
					}
				}
				for (auto it = salesmanList.begin(); it != salesmanList.end(); it++) {
					if ((*it).getId() == id)
					{
						salesmanList.erase(it);
						break;
					}
				}
				for (auto it = salesmanagerList.begin(); it != salesmanagerList.end(); it++) {
					if ((*it).getId() == id)
					{
						salesmanagerList.erase(it);
						break;
					}
				}
			}
			cout << "已删除。" << endl;
			return 1;
		}
		else if (choose == 0) {
			cout << "操作已取消。" << endl;
		}
		else {
			cout << "输入不合法，已返回。" << endl;
		}
	}
	else
	{
		cout << "用户不存在。" << endl;
	}
	return 0;
}

void OperateTool::addMember(int id, string name, int level, int positioinId,
	vector<Manager>& managerList,
	vector<PartTimeTechnician>& partTimeTechnicianList,
	vector<SalesMan>& salesmanList,
	vector<SalesManager>& salesmanagerList, int workTime, int salesVolume) {


	switch (positioinId)
	{
	case 1:	//经理
	{
		Manager manager(id, name, level, positioinId);
		managerList.push_back(manager);
		break;
	}
	case 2:	//推销经理
	{
		SalesManager salesmanager(id, name, level, positioinId);
		salesmanager.setSalesVolume(salesVolume);
		salesmanagerList.push_back(salesmanager);
		break;
	}
	case 3:	//推销员
	{
		SalesMan salesman(id, name, level, positioinId);
		salesman.setSalesVolume(salesVolume);
		salesmanList.push_back(salesman);
		break;
	}
	case 4:	//兼职技术人员	
	{
		PartTimeTechnician partTimeTechnician(id, name, level, positioinId);
		partTimeTechnician.setWorkTime(workTime);
		partTimeTechnicianList.push_back(partTimeTechnician);
		break;
	}
	default:
		break;
	}
	cout << "添加成功。" << endl;
}

int OperateTool::upgradeLevel(int id,
	vector<Manager>& managerList,
	vector<PartTimeTechnician>& partTimeTechnicianList,
	vector<SalesMan>& salesmanList,
	vector<SalesManager>& salesmanagerList) {
	
	for (auto it = managerList.begin(); it != managerList.end(); it++) {
		if ((*it).getId() == id)
		{
			(*it).setLevel((*it).getLevel() + 1);
			cout << "升职成功。" << endl;
			return 1;
		}
	}

	for (auto it = partTimeTechnicianList.begin(); it != partTimeTechnicianList.end(); it++) {
		if ((*it).getId() == id)
		{
			(*it).setLevel((*it).getLevel() + 1);
			cout << "升职成功。" << endl;
			return 1;
		}
	}

	for (auto it = salesmanList.begin(); it != salesmanList.end(); it++) {
		if ((*it).getId() == id)
		{
			(*it).setLevel((*it).getLevel() + 1);
			cout << "升职成功。" << endl;
			return 1;
		}
	}

	for (auto it = salesmanagerList.begin(); it != salesmanagerList.end(); it++) {
		if ((*it).getId() == id)
		{
			(*it).setLevel((*it).getLevel() + 1);
			cout << "升职成功。" << endl;
			return 1;
		}
	}
	cout << "未找到该用户ID，升职失败。" << endl;
	return 0;
}
