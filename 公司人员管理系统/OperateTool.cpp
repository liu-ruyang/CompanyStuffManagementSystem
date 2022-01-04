#include "OperateTool.h"
#include<iostream>
using namespace std;

void OperateTool::showAllSortById(vector<Manager>& managerList,
	vector<PartTimeTechnician>& partTimeTechnicianList,
	vector<SalesMan>& salesmanList,
	vector<SalesManager>& salesmanagerList) {
	cout << "���ID" << "\t\t" << "����" << "\t\t" << "����" << "\t\t" << "ְ��"<<"\t\t"
		<< "����нˮ" << "\t" << "��н�ܶ�" << endl;

	int index;
	int j1 = 0, j2 = 0, j3 = 0, j4 = 0;
	int a, b, c, d;

	//�ĸ�vector�ж���ʣ�����
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

	//����vector����ʣ�����
	for (; j1 < managerList.size() && j2 < partTimeTechnicianList.size() && j3 < salesmanList.size(); ) {
		managerList[j1].getId() < partTimeTechnicianList[j2].getId() ?
			(managerList[j1].getId() < salesmanList[j3].getId() ?
				managerList[j1++].showInfo() : salesmanList[j3++].showInfo()) :
			(partTimeTechnicianList[j2].getId() < salesmanList[j3].getId() ?
				partTimeTechnicianList[j2++].showInfo() : salesmanList[j3++].showInfo());
	}

	//����vector����ʣ�����
	for (; j1 < managerList.size() && j2 < partTimeTechnicianList.size() && j4 < salesmanagerList.size(); ) {
		managerList[j1].getId() < partTimeTechnicianList[j2].getId() ?
			(managerList[j1].getId() < salesmanagerList[j4].getId() ?
				managerList[j1++].showInfo() : salesmanagerList[j4++].showInfo()) :
			(partTimeTechnicianList[j2].getId() < salesmanagerList[j4].getId() ?
				partTimeTechnicianList[j2++].showInfo() : salesmanagerList[j4++].showInfo());
	}

	//����vector����ʣ�����
	for (; j1 < managerList.size() && j3 < salesmanList.size() && j4 < salesmanagerList.size(); ) {
		managerList[j1].getId() < salesmanList[j3].getId() ?
			(managerList[j1].getId() < salesmanagerList[j4].getId() ?
				managerList[j1++].showInfo() : salesmanagerList[j4++].showInfo()) :
			(salesmanList[j3].getId() < salesmanagerList[j4].getId() ?
				salesmanList[j3++].showInfo() : salesmanagerList[j4++].showInfo());
	}

	//����vector����ʣ�����
	for (; j2 < partTimeTechnicianList.size() && j3 < salesmanList.size() && j4 < salesmanagerList.size(); ) {
		partTimeTechnicianList[j2].getId() < salesmanList[j3].getId() ?
			(partTimeTechnicianList[j2].getId() < salesmanagerList[j4].getId() ?
				partTimeTechnicianList[j2++].showInfo() : salesmanagerList[j4++].showInfo()) :
			(salesmanList[j3].getId() < salesmanagerList[j4].getId() ?
				salesmanList[j3++].showInfo() : salesmanagerList[j4++].showInfo());
	}

	//����vector����ʣ�����
	for (; j1 < managerList.size() && j2 < partTimeTechnicianList.size();) {
		managerList[j1].getId() < partTimeTechnicianList[j2].getId() ?
			managerList[j1++].showInfo() : partTimeTechnicianList[j2++].showInfo();
	}

	//����vector����ʣ�����
	for (; j1 < managerList.size() && j3 < salesmanList.size();) {
		managerList[j1].getId() < salesmanList[j3].getId() ?
			managerList[j1++].showInfo() : salesmanList[j3++].showInfo();
	}

	//����vector����ʣ�����
	for (; j1 < managerList.size() && j4 < salesmanagerList.size();) {
		managerList[j1].getId() < salesmanagerList[j4].getId() ?
			managerList[j1++].showInfo() : salesmanagerList[j4++].showInfo();
	}

	//����vector����ʣ�����
	for (; j2 < partTimeTechnicianList.size() && j3 < salesmanList.size();) {
		partTimeTechnicianList[j2].getId() < salesmanList[j3].getId() ?
			partTimeTechnicianList[j2++].showInfo() : salesmanList[j3++].showInfo();
	}

	//����vector����ʣ�����
	for (; j2 < partTimeTechnicianList.size() && j4 < salesmanagerList.size();) {
		partTimeTechnicianList[j2].getId() < salesmanagerList[j4].getId() ?
			partTimeTechnicianList[j2++].showInfo() : salesmanagerList[j4++].showInfo();
	}

	//����vector����ʣ�����
	for (; j3 < salesmanList.size() && j4 < salesmanagerList.size();) {
		salesmanList[j3].getId() < salesmanagerList[j4].getId() ?
			salesmanList[j3++].showInfo() : salesmanagerList[j4++].showInfo();
	}

	//һ��vector����ʣ�����
	for (; j1 < managerList.size();) {
		managerList[j1++].showInfo();
	}

	//һ��vector����ʣ�����
	for (; j2 < partTimeTechnicianList.size();) {
		partTimeTechnicianList[j2++].showInfo();
	}

	//һ��vector����ʣ�����
	for (; j3 < salesmanList.size();) {
		salesmanList[j3++].showInfo();
	}

	//һ��vector����ʣ�����
	for (; j4 < salesmanagerList.size();) {
		salesmanagerList[j4++].showInfo();
	}

	if (j1 == 0 && j2 == 0 && j3 == 0 && j4 == 0) {
		cout << "����Ϊ�ա�" << endl;
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
	cout << "��ѯ���Ϊ�գ�" << endl;
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
		cout << "ȷ��ɾ��?" << "������1ȷ��������0ȡ����" << endl;
		cout << "�����룺";
		int choose;
		cin >> choose;
		if (choose == 1)
		{
			for (auto it = managerList.begin(); it != managerList.end(); it++) {
				if ((*it).getId() == id)
				{
					managerList.erase(it);
					cout << "��ɾ����" << endl;
					break;
				}
			}
			for (auto it = partTimeTechnicianList.begin(); it != partTimeTechnicianList.end(); it++) {
				if ((*it).getId() == id)
				{
					partTimeTechnicianList.erase(it);
					cout << "��ɾ����" << endl;
					break;
				}
			}
			for (auto it = salesmanList.begin(); it != salesmanList.end(); it++) {
				if ((*it).getId() == id)
				{
					salesmanList.erase(it);
					cout << "��ɾ����" << endl;
					break;
				}
			}
			for (auto it = salesmanagerList.begin(); it != salesmanagerList.end(); it++) {
				if ((*it).getId() == id)
				{
					salesmanagerList.erase(it);
					cout << "��ɾ����" << endl;
					break;
				}
			}
		}
		else if (choose == 0)
		{
			cout << "������ȡ����" << endl;
		}
		else
		{
			cout << "���벻�Ϸ����ѷ��ء�" << endl;
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
		cout << "��ѯ���Ϊ�գ�" << endl;
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
		cout << "ȷ��ɾ��ȫ����������1ȷ��������0ȡ����" << endl;
		cout << "�����룺";
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
			cout << "��ɾ����" << endl;
			return 1;
		}
		else if (choose == 0) {
			cout << "������ȡ����" << endl;
		}
		else {
			cout << "���벻�Ϸ����ѷ��ء�" << endl;
		}
	}
	else
	{
		cout << "�û������ڡ�" << endl;
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
	case 1:	//����
	{
		Manager manager(id, name, level, positioinId);
		managerList.push_back(manager);
		break;
	}
	case 2:	//��������
	{
		SalesManager salesmanager(id, name, level, positioinId);
		salesmanager.setSalesVolume(salesVolume);
		salesmanagerList.push_back(salesmanager);
		break;
	}
	case 3:	//����Ա
	{
		SalesMan salesman(id, name, level, positioinId);
		salesman.setSalesVolume(salesVolume);
		salesmanList.push_back(salesman);
		break;
	}
	case 4:	//��ְ������Ա	
	{
		PartTimeTechnician partTimeTechnician(id, name, level, positioinId);
		partTimeTechnician.setWorkTime(workTime);
		partTimeTechnicianList.push_back(partTimeTechnician);
		break;
	}
	default:
		break;
	}
	cout << "��ӳɹ���" << endl;
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
			cout << "��ְ�ɹ���" << endl;
			return 1;
		}
	}

	for (auto it = partTimeTechnicianList.begin(); it != partTimeTechnicianList.end(); it++) {
		if ((*it).getId() == id)
		{
			(*it).setLevel((*it).getLevel() + 1);
			cout << "��ְ�ɹ���" << endl;
			return 1;
		}
	}

	for (auto it = salesmanList.begin(); it != salesmanList.end(); it++) {
		if ((*it).getId() == id)
		{
			(*it).setLevel((*it).getLevel() + 1);
			cout << "��ְ�ɹ���" << endl;
			return 1;
		}
	}

	for (auto it = salesmanagerList.begin(); it != salesmanagerList.end(); it++) {
		if ((*it).getId() == id)
		{
			(*it).setLevel((*it).getLevel() + 1);
			cout << "��ְ�ɹ���" << endl;
			return 1;
		}
	}
	cout << "δ�ҵ����û�ID����ְʧ�ܡ�" << endl;
	return 0;
}
