#include "FileTool.h"
#include<fstream>
#include<cstring>
#include<stdlib.h>

int FileTool::readFile(string file, vector<Manager>& managerList, vector<PartTimeTechnician>& partTimeTechnicianList, vector<SalesMan>& salesmanList, vector<SalesManager>& salesmanagerList) {
	int maxId = 0;
	fstream openfile(file);
	if (!openfile) {
		cout << "�ļ���ʧ�ܣ�(�ļ����ܲ�����)" << endl;
	}
	else {
		char str[200];
		openfile.getline(str, 200);
		while (openfile)//���ж�ȡ
		{
			openfile.getline(str, 200);
			int i = 0;
			int len = strlen(str);
			string content;
			string job = "";

			int id;			//���ID
			string name;	//����
			int level;		//����
			double thisMonthSalary;	//������н
			double oldSalarySum;	//������ǰ����н
			double fixedSalary;		//ÿ�¹̶�н��
			int workTime;			//��ʱ
			double salesColume;		//���۶�

			while (i < len && str[i] != ' ' && str[i] != '\t') {//�ȶ�ȡְ���ַ�
				job += str[i];
				i++;
			}
			if (job == "1")
			{
				int choose = 0;
				while (i < len) {	//���ֶζ�ȡ
					content = "";   //�ֶ�����
					while (i < len && str[i] != ' ' && str[i] != '\t')	//���ַ���ȡ
					{
						content += str[i];
						i++;
					}
					/*
					�����ݴ��뵽������
					*/
					switch (choose)
					{
					case 1:	//���ID
						id = atoi(content.c_str());
						maxId = maxId > id ? maxId : id;
						break;
					case 2:	//����
						name = content;
						break;
					case 3:	//����
						level = atoi(content.c_str());
						break;
					case 4:	//����н��
						thisMonthSalary = atof(content.c_str());
						break;
					case 5:	//������ǰ��н��
						oldSalarySum = atof(content.c_str());
						break;
					case 6:	//�̶�н��
						fixedSalary = atof(content.c_str());
						break;
					default://Խ����Ч�ֶ�
						break;
					}
					choose++;
					//Խ���ո�
					while (str[i] == ' ' || str[i] == '\t')
					{
						i++;
					}
				}
				/*��ȡ�����ֶ����ݴ��뵽������*/
				Manager manager(id, name, level, 1);
				manager.setOldSalarySum(oldSalarySum);
				/*cout << manager.getSalary().getOldSalarySum() << endl;
				cout << manager.getSalary().getThisMonthSalary() << endl;*/
				managerList.push_back(manager);
			}
			else if (job == "2") {
				int choose = 0;
				while (i < len) {	//���ֶζ�ȡ
					content = "";
					while (i < len && str[i] != ' ' && str[i] != '\t')	//���ַ���ȡ
					{
						content += str[i];
						i++;
					}
					/*
					�����ݴ��뵽������
					*/
					switch (choose)
					{
					case 1:	//���ID
						id = atoi(content.c_str());
						maxId = maxId > id ? maxId : id;
						break;
					case 2:	//����
						name = content;
						break;
					case 3:	//����
						level = atoi(content.c_str());
						break;
					case 4:	//����н��
						thisMonthSalary = atof(content.c_str());
						break;
					case 5:	//������ǰ��н��
						oldSalarySum = atof(content.c_str());
						break;
					case 6:	//�̶�н��
						fixedSalary = atof(content.c_str());
						break;
					case 8:	//�����۶�
						salesColume = atof(content.c_str());
						break;
					default://Խ����Ч�ֶ�
						break;
					}
					choose++;
					//Խ���ո�
					while (str[i] == ' ' || str[i] == '\t')
					{
						i++;
					}
				}
				/*��ȡ�����ֶ�ֵ���뵽������*/
				SalesManager salesmanager(id, name, level, 2);
				salesmanager.setSalesVolume(salesColume);
				salesmanager.setOldSalarySum(oldSalarySum);
				salesmanagerList.push_back(salesmanager);
			}
			else if (job == "3")
			{
				int choose = 0;
				while (i < len) {	//���ֶζ�ȡ
					content = "";
					while (i < len && str[i] != ' ' && str[i] != '\t')	//���ַ���ȡ
					{
						content += str[i];
						i++;
					}
					/*
					�����ݴ��뵽������
					*/
					switch (choose)
					{
					case 1:	//���ID
						id = atoi(content.c_str());
						maxId = maxId > id ? maxId : id;
						break;
					case 2:	//����
						name = content;
						break;
					case 3:	//����
						level = atoi(content.c_str());
						break;
					case 4:	//����н��
						thisMonthSalary = atof(content.c_str());
						break;
					case 5:	//������ǰ��н��
						oldSalarySum = atof(content.c_str());
						break;
					case 8:	//�����۶�
						salesColume = atof(content.c_str());
						break;
					default://Խ����Ч�ֶ�
						break;
					}
					choose++;
					//Խ���ո�
					while (str[i] == ' ' || str[i] == '\t')
					{
						i++;
					}
				}
				/*��ȡ�����ֶ����ݴ��뵽������*/
				SalesMan salesman(id, name, level, 3);
				salesman.setOldSalarySum(oldSalarySum);
				salesman.setSalesVolume(salesColume);
				salesmanList.push_back(salesman);
			}
			else if (job == "4")
			{
				int choose = 0;
				while (i < len) {	//���ֶζ�ȡ
					content = "";
					while (i < len && str[i] != ' ' && str[i] != '\t')	//���ַ���ȡ
					{
						content += str[i];
						i++;
					}
					/*
					�����ݴ��뵽������
					*/
					switch (choose)
					{
					case 1:	//���ID
						id = atoi(content.c_str());
						maxId = maxId > id ? maxId : id;
						break;
					case 2:	//����
						name = content;
						break;
					case 3:	//����
						level = atoi(content.c_str());
						break;
					case 4:	//����н��
						thisMonthSalary = atof(content.c_str());
						break;
					case 5:	//������ǰ��н��
						oldSalarySum = atof(content.c_str());
						break;
					case 7:
						workTime = atoi(content.c_str());
						break;
					default://Խ����Ч�ֶ�
						break;
					}
					choose++;
					//Խ���ո�
					while (str[i] == ' ' || str[i] == '\t')
					{
						i++;
					}
				}
				/*��ȡ�����ֶ����ݴ��뵽������*/
				PartTimeTechnician partTimeTechnician(id, name, level, 4);
				partTimeTechnician.setWorkTime(workTime);
				partTimeTechnician.setOldSalarySum(oldSalarySum);
				partTimeTechnicianList.push_back(partTimeTechnician);
			}
		}
		cout << "��ͣ�鿴�ڴ�" << endl;
	}

	openfile.close();
	return maxId;
}

void FileTool::saveFile(string file, vector<Manager>& managerList,
	vector<PartTimeTechnician>& partTimeTechnicianList,
	vector<SalesMan>& salesmanList,
	vector<SalesManager>& salesmanagerList) {

	//fstream openfile(file);
	/*����ļ�ԭ������*/
	ofstream fout("C:\\Users\\������\\Desktop\\a.txt");
	
	/*����д������*/
	fout << "ְ��ID" << "\t\t" << "���ID" << "\t\t" << "����" << "\t\t" << "����" << "\t\t" 
		<< "����нˮ" << "\t\t" << "��н�ܶ�" << "\t\t" << "�̶�н��" << "\t\t" << "��ʱ"
		<< "\t\t" << "�������۶�" << endl;

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
	cout << "�浵������" << endl;
}