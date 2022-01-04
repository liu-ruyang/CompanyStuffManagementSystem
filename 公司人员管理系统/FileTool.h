#pragma once
#include<iostream>
#include<vector>
#include "Manager.h"
#include "PartTimeTechnician.h"
#include "SalesMan.h"
#include "SalesManager.h"
using namespace std;
class FileTool
{
public:
	//�ӱ��ض�ȡ���ݣ����ص������ı��ID
	int readFile(string file, vector<Manager>& managerList,
		vector<PartTimeTechnician>& partTimeTechnicianList,
		vector<SalesMan>& salesmanList,
		vector<SalesManager>& salesmanagerList);


	//�浵
	void saveFile(string file, vector<Manager>& managerList,
		vector<PartTimeTechnician>& partTimeTechnicianList,
		vector<SalesMan>& salesmanList,
		vector<SalesManager>& salesmanagerList);

};