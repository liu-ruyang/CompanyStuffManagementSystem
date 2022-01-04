#include<iostream>
#include "Salary.h"
#include <vector>
#include "Manager.h"
#include "PartTimeTechnician.h"
#include "SalesMan.h"
#include "SalesManager.h"
#include "FileTool.h"
#include "OperateTool.h"
using namespace std;


void start() {
	cout << "��ӭ����С�������ϵͳ(*^��^*)" << endl << endl << endl;
	OperateTool operateTool;
	FileTool fileTool;
	vector<Manager> managerList;
	vector<PartTimeTechnician> partTimeTechnicianList;
	vector<SalesMan> salesmanList;
	vector<SalesManager> salesmanagerList;
	int maxId = 0;

	//��ȡ��������
	cout << "��ȡ�����С���" << endl;
	maxId = fileTool.readFile("C:\\Users\\������\\Desktop\\info.txt", managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
	cout << "���ݶ�ȡ������" << endl;

	while (true)
	{
		int choose;
		cout << "��ѡ����:" << endl
			<< "1.�����������ʾ���г�Ա" << endl
			<< "2.���������ҳ�Ա" << endl
			<< "3.����Ų��ҳ�Ա" << endl
			<< "4.�����ɾ����Ա" << endl
			<< "5.������ɾ����Ա" << endl
			<< "6.��ӳ�Ա" << endl
			<< "7.��ְ����" << endl
			<< "8.�浵" << endl
			<< "����ѡ��";
		cin >> choose;
		switch (choose)
		{
		case 1: {
			operateTool.showAllSortById(managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
			break;
		}
		case 2: {
			string name;
			cout << "����Ҫ��ѯ��������";
			cin >> name;
			operateTool.selectByName(name, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
			break;
		}
		case 3: {
			int selectId;
			cout << "����Ҫ��ѯ�ı��ID��";
			cin >> selectId;
			operateTool.selectById(selectId, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
			break;
		}
		case 4: {
			int deleteId;
			cout << "����Ҫɾ���ı��ID��";
			cin >> deleteId;
			operateTool.deleteById(deleteId, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
			break;
		}
		case 5: {
			string name;
			cout << "����Ҫɾ����������";
			cin >> name;
			operateTool.deleteByName(name, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
			break;
		}
		case 6:
		{
			int id;
			string name;
			int level;
			int positionId;
			int workTime;
			int salesVolume;
			cout << "��ѡ��Ҫ��ӵĳ�Ա��ְλ���ͣ�" << endl
				<< "1.����" << endl
				<< "2.���۾���" << endl
				<< "3.����Ա" << endl
				<< "4.��ְ������Ա" << endl
				<< "�����룺";
			cin >> positionId;
			switch (positionId)
			{
			case 1:
			{
				cout << "Ҫ�������Ϣ�У�����������" << endl;
				cout << "������������";
				cin >> name;
				cout << "�����뼶��";
				cin >> level;
				operateTool.addMember(++maxId, name, level, positionId, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
				break;
			}
			case 2:
			{
				cout << "Ҫ�������Ϣ�У�����������" << endl;
				cout << "������������";
				cin >> name;
				cout << "�����뼶��";
				cin >> level;
				operateTool.addMember(++maxId, name, level, positionId, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
				break;
			}
			case 3:
			{
				cout << "Ҫ�������Ϣ�У�����������" << endl;
				cout << "������������";
				cin >> name;
				cout << "�����뼶��";
				cin >> level;
				operateTool.addMember(++maxId, name, level, positionId, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
				break;
			}
			case 4:
			{
				cout << "Ҫ�������Ϣ�У�����������" << endl;
				cout << "������������";
				cin >> name;
				cout << "�����뼶��";
				cin >> level;
				operateTool.addMember(++maxId, name, level, positionId, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
				break;
			}
			default:
				cout << "���벻�Ϸ���" << endl;
				getchar();
				break;
			}
			break;
		}
		case 7: {
			/*��ְ����*/
			int upgradeId;
			cout << "����Ҫ��ְ�ı��ID��";
			cin >> upgradeId;
			operateTool.upgradeLevel(upgradeId, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
			break;
		}
		case 8: {
			/*�浵����*/
			fileTool.saveFile("C:\\Users\\������\\Desktop\\info.txt", managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
			break;
		}
		default:
			cout << endl << "���Ϸ�����!" << endl;
			getchar();
			break;
		}

		cout << endl << endl;
	}
}



int main() {
	//��������
	start();

	return 0;
}