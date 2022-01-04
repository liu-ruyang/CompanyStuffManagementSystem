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
	cout << "欢迎进入小六猪管理系统(*^▽^*)" << endl << endl << endl;
	OperateTool operateTool;
	FileTool fileTool;
	vector<Manager> managerList;
	vector<PartTimeTechnician> partTimeTechnicianList;
	vector<SalesMan> salesmanList;
	vector<SalesManager> salesmanagerList;
	int maxId = 0;

	//读取本地数据
	cout << "读取数据中……" << endl;
	maxId = fileTool.readFile("C:\\Users\\刘汝杨\\Desktop\\info.txt", managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
	cout << "数据读取结束。" << endl;

	while (true)
	{
		int choose;
		cout << "请选择功能:" << endl
			<< "1.按编号排序显示所有成员" << endl
			<< "2.按姓名查找成员" << endl
			<< "3.按编号查找成员" << endl
			<< "4.按编号删除成员" << endl
			<< "5.按姓名删除成员" << endl
			<< "6.添加成员" << endl
			<< "7.升职管理" << endl
			<< "8.存档" << endl
			<< "输入选择：";
		cin >> choose;
		switch (choose)
		{
		case 1: {
			operateTool.showAllSortById(managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
			break;
		}
		case 2: {
			string name;
			cout << "输入要查询的姓名：";
			cin >> name;
			operateTool.selectByName(name, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
			break;
		}
		case 3: {
			int selectId;
			cout << "输入要查询的编号ID：";
			cin >> selectId;
			operateTool.selectById(selectId, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
			break;
		}
		case 4: {
			int deleteId;
			cout << "输入要删除的编号ID：";
			cin >> deleteId;
			operateTool.deleteById(deleteId, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
			break;
		}
		case 5: {
			string name;
			cout << "输入要删除的姓名：";
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
			cout << "请选择要添加的成员的职位类型：" << endl
				<< "1.经理" << endl
				<< "2.销售经理" << endl
				<< "3.推销员" << endl
				<< "4.兼职技术人员" << endl
				<< "请输入：";
			cin >> positionId;
			switch (positionId)
			{
			case 1:
			{
				cout << "要输入的信息有：姓名、级别。" << endl;
				cout << "请输入姓名：";
				cin >> name;
				cout << "请输入级别：";
				cin >> level;
				operateTool.addMember(++maxId, name, level, positionId, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
				break;
			}
			case 2:
			{
				cout << "要输入的信息有：姓名、级别。" << endl;
				cout << "请输入姓名：";
				cin >> name;
				cout << "请输入级别：";
				cin >> level;
				operateTool.addMember(++maxId, name, level, positionId, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
				break;
			}
			case 3:
			{
				cout << "要输入的信息有：姓名、级别。" << endl;
				cout << "请输入姓名：";
				cin >> name;
				cout << "请输入级别：";
				cin >> level;
				operateTool.addMember(++maxId, name, level, positionId, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
				break;
			}
			case 4:
			{
				cout << "要输入的信息有：姓名、级别。" << endl;
				cout << "请输入姓名：";
				cin >> name;
				cout << "请输入级别：";
				cin >> level;
				operateTool.addMember(++maxId, name, level, positionId, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
				break;
			}
			default:
				cout << "输入不合法！" << endl;
				getchar();
				break;
			}
			break;
		}
		case 7: {
			/*升职管理*/
			int upgradeId;
			cout << "输入要升职的编号ID：";
			cin >> upgradeId;
			operateTool.upgradeLevel(upgradeId, managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
			break;
		}
		case 8: {
			/*存档操作*/
			fileTool.saveFile("C:\\Users\\刘汝杨\\Desktop\\info.txt", managerList, partTimeTechnicianList, salesmanList, salesmanagerList);
			break;
		}
		default:
			cout << endl << "不合法输入!" << endl;
			getchar();
			break;
		}

		cout << endl << endl;
	}
}



int main() {
	//开启服务
	start();

	return 0;
}