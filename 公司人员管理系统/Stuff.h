#pragma once
#include <string>
using namespace std;

class Stuff
{
private:
	int id;			//���
	string name;	//����
	int level;		//����
	int positionId;	//ְ��id

public:
	Stuff() {}
	Stuff(int id, string name, int level, int positionId);		//��ʼ��
	void promoted();		//��ְ
	void setId(int id);
	void setName(string name);
	void setLevel(int level);
	void setPositionId(int positionId);
	int getId();
	string getName();
	int getLevel();
	int getPositionId();
};