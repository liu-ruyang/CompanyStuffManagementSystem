#pragma once
#include <string>
using namespace std;

class Stuff
{
private:
	int id;			//编号
	string name;	//姓名
	int level;		//级别
	int positionId;	//职称id

public:
	Stuff() {}
	Stuff(int id, string name, int level, int positionId);		//初始化
	void promoted();		//升职
	void setId(int id);
	void setName(string name);
	void setLevel(int level);
	void setPositionId(int positionId);
	int getId();
	string getName();
	int getLevel();
	int getPositionId();
};