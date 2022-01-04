#include "FileTool.h"
#include<fstream>
#include<cstring>
#include<stdlib.h>

int FileTool::readFile(string file, vector<Manager>& managerList, vector<PartTimeTechnician>& partTimeTechnicianList, vector<SalesMan>& salesmanList, vector<SalesManager>& salesmanagerList) {
	int maxId = 0;
	fstream openfile(file);
	if (!openfile) {
		cout << "文件打开失败！(文件可能不存在)" << endl;
	}
	else {
		char str[200];
		openfile.getline(str, 200);
		while (openfile)//逐行读取
		{
			openfile.getline(str, 200);
			int i = 0;
			int len = strlen(str);
			string content;
			string job = "";

			int id;			//编号ID
			string name;	//姓名
			int level;		//级别
			double thisMonthSalary;	//当月月薪
			double oldSalarySum;	//当月以前的月薪
			double fixedSalary;		//每月固定薪资
			int workTime;			//工时
			double salesColume;		//销售额

			while (i < len && str[i] != ' ' && str[i] != '\t') {//先读取职称字符
				job += str[i];
				i++;
			}
			if (job == "1")
			{
				int choose = 0;
				while (i < len) {	//逐字段读取
					content = "";   //字段清零
					while (i < len && str[i] != ' ' && str[i] != '\t')	//逐字符读取
					{
						content += str[i];
						i++;
					}
					/*
					将数据存入到对象中
					*/
					switch (choose)
					{
					case 1:	//编号ID
						id = atoi(content.c_str());
						maxId = maxId > id ? maxId : id;
						break;
					case 2:	//姓名
						name = content;
						break;
					case 3:	//级别
						level = atoi(content.c_str());
						break;
					case 4:	//当月薪资
						thisMonthSalary = atof(content.c_str());
						break;
					case 5:	//当月以前的薪资
						oldSalarySum = atof(content.c_str());
						break;
					case 6:	//固定薪资
						fixedSalary = atof(content.c_str());
						break;
					default://越过无效字段
						break;
					}
					choose++;
					//越过空格
					while (str[i] == ' ' || str[i] == '\t')
					{
						i++;
					}
				}
				/*获取到的字段数据存入到对象当中*/
				Manager manager(id, name, level, 1);
				manager.setOldSalarySum(oldSalarySum);
				/*cout << manager.getSalary().getOldSalarySum() << endl;
				cout << manager.getSalary().getThisMonthSalary() << endl;*/
				managerList.push_back(manager);
			}
			else if (job == "2") {
				int choose = 0;
				while (i < len) {	//逐字段读取
					content = "";
					while (i < len && str[i] != ' ' && str[i] != '\t')	//逐字符读取
					{
						content += str[i];
						i++;
					}
					/*
					将数据存入到对象中
					*/
					switch (choose)
					{
					case 1:	//编号ID
						id = atoi(content.c_str());
						maxId = maxId > id ? maxId : id;
						break;
					case 2:	//姓名
						name = content;
						break;
					case 3:	//级别
						level = atoi(content.c_str());
						break;
					case 4:	//当月薪资
						thisMonthSalary = atof(content.c_str());
						break;
					case 5:	//当月以前的薪资
						oldSalarySum = atof(content.c_str());
						break;
					case 6:	//固定薪资
						fixedSalary = atof(content.c_str());
						break;
					case 8:	//月销售额
						salesColume = atof(content.c_str());
						break;
					default://越过无效字段
						break;
					}
					choose++;
					//越过空格
					while (str[i] == ' ' || str[i] == '\t')
					{
						i++;
					}
				}
				/*获取到的字段值存入到对象当中*/
				SalesManager salesmanager(id, name, level, 2);
				salesmanager.setSalesVolume(salesColume);
				salesmanager.setOldSalarySum(oldSalarySum);
				salesmanagerList.push_back(salesmanager);
			}
			else if (job == "3")
			{
				int choose = 0;
				while (i < len) {	//逐字段读取
					content = "";
					while (i < len && str[i] != ' ' && str[i] != '\t')	//逐字符读取
					{
						content += str[i];
						i++;
					}
					/*
					将数据存入到对象中
					*/
					switch (choose)
					{
					case 1:	//编号ID
						id = atoi(content.c_str());
						maxId = maxId > id ? maxId : id;
						break;
					case 2:	//姓名
						name = content;
						break;
					case 3:	//级别
						level = atoi(content.c_str());
						break;
					case 4:	//当月薪资
						thisMonthSalary = atof(content.c_str());
						break;
					case 5:	//当月以前的薪资
						oldSalarySum = atof(content.c_str());
						break;
					case 8:	//月销售额
						salesColume = atof(content.c_str());
						break;
					default://越过无效字段
						break;
					}
					choose++;
					//越过空格
					while (str[i] == ' ' || str[i] == '\t')
					{
						i++;
					}
				}
				/*获取到的字段数据存入到对象当中*/
				SalesMan salesman(id, name, level, 3);
				salesman.setOldSalarySum(oldSalarySum);
				salesman.setSalesVolume(salesColume);
				salesmanList.push_back(salesman);
			}
			else if (job == "4")
			{
				int choose = 0;
				while (i < len) {	//逐字段读取
					content = "";
					while (i < len && str[i] != ' ' && str[i] != '\t')	//逐字符读取
					{
						content += str[i];
						i++;
					}
					/*
					将数据存入到对象中
					*/
					switch (choose)
					{
					case 1:	//编号ID
						id = atoi(content.c_str());
						maxId = maxId > id ? maxId : id;
						break;
					case 2:	//姓名
						name = content;
						break;
					case 3:	//级别
						level = atoi(content.c_str());
						break;
					case 4:	//当月薪资
						thisMonthSalary = atof(content.c_str());
						break;
					case 5:	//当月以前的薪资
						oldSalarySum = atof(content.c_str());
						break;
					case 7:
						workTime = atoi(content.c_str());
						break;
					default://越过无效字段
						break;
					}
					choose++;
					//越过空格
					while (str[i] == ' ' || str[i] == '\t')
					{
						i++;
					}
				}
				/*获取到的字段数据存入到对象当中*/
				PartTimeTechnician partTimeTechnician(id, name, level, 4);
				partTimeTechnician.setWorkTime(workTime);
				partTimeTechnician.setOldSalarySum(oldSalarySum);
				partTimeTechnicianList.push_back(partTimeTechnician);
			}
		}
		cout << "暂停查看内存" << endl;
	}

	openfile.close();
	return maxId;
}

void FileTool::saveFile(string file, vector<Manager>& managerList,
	vector<PartTimeTechnician>& partTimeTechnicianList,
	vector<SalesMan>& salesmanList,
	vector<SalesManager>& salesmanagerList) {

	//fstream openfile(file);
	/*清空文件原有内容*/
	ofstream fout("C:\\Users\\刘汝杨\\Desktop\\a.txt");
	
	/*重新写入数据*/
	fout << "职称ID" << "\t\t" << "编号ID" << "\t\t" << "姓名" << "\t\t" << "级别" << "\t\t" 
		<< "本月薪水" << "\t\t" << "月薪总额" << "\t\t" << "固定薪资" << "\t\t" << "工时"
		<< "\t\t" << "当月销售额" << endl;

	for (auto it = managerList.begin(); it != managerList.end(); it++) {
		fout << (*it).getPositionId() << "\t\t" << (*it).getId() << "\t\t" << (*it).getName() << "\t\t"
			<< (*it).getLevel() << "\t\t" << (*it).getSalary().getThisMonthSalary() << "\t\t" << (*it).getSalary().getOldSalarySum() + (*it).getSalary().getThisMonthSalary() << "\t\t"
			<< (*it).getSalary().getFixedMonthSalary() << "\t\t" << "##" << "\t\t" << "##" << endl;
	}
	
	for (auto it = partTimeTechnicianList.begin(); it != partTimeTechnicianList.end(); it++) {
		fout << (*it).getPositionId() << "\t\t" << (*it).getId() << "\t\t" << (*it).getName() << "\t\t"
			<< (*it).getLevel() << "\t\t" << (*it).getSalary().getThisMonthSalary() << "\t\t" << (*it).getSalary().getOldSalarySum() + (*it).getSalary().getThisMonthSalary() << "\t\t"
			<< "##" << "\t\t" << (*it).getSalary().getWorkTime() << "\t\t" << "##" << endl;
	}

	for (auto it = salesmanList.begin(); it != salesmanList.end(); it++) {
		fout << (*it).getPositionId() << "\t\t" << (*it).getId() << "\t\t" << (*it).getName() << "\t\t"
			<< (*it).getLevel() << "\t\t" << (*it).getSalary().getThisMonthSalary() << "\t\t" << (*it).getSalary().getOldSalarySum() + (*it).getSalary().getThisMonthSalary() << "\t\t"
			<< "##" << "\t\t" << "##" << "\t\t" << (*it).getSalary().getSalesVolume() << endl;
	}

	for (auto it = salesmanagerList.begin(); it != salesmanagerList.end(); it++) {
		fout << (*it).getPositionId() << "\t\t" << (*it).getId() << "\t\t" << (*it).getName() << "\t\t"
			<< (*it).getLevel() << "\t\t" << (*it).getSalary().getThisMonthSalary() << "\t\t" << (*it).getSalary().getOldSalarySum() + (*it).getSalary().getThisMonthSalary() << "\t\t"
			<< (*it).getSalary().getFixedMonthSalary() << "\t\t" << "##" << "\t\t" << (*it).getSalary().getSalesVolume() << endl;
	}

	fout.close();
	cout << "存档结束。" << endl;
}