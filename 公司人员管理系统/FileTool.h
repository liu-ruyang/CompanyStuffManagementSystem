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
	//从本地读取数据，返回的是最大的编号ID
	int readFile(string file, vector<Manager>& managerList,
		vector<PartTimeTechnician>& partTimeTechnicianList,
		vector<SalesMan>& salesmanList,
		vector<SalesManager>& salesmanagerList);


	//存档
	void saveFile(string file, vector<Manager>& managerList,
		vector<PartTimeTechnician>& partTimeTechnicianList,
		vector<SalesMan>& salesmanList,
		vector<SalesManager>& salesmanagerList);

};