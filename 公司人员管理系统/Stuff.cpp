
#include "Stuff.h"

Stuff::Stuff(int id, string name, int level, int positionId) {//³õÊ¼»¯
	this->id = id;
	this->name = name;
	this->level = level;
	this->positionId = positionId;
}

void Stuff::promoted() {
	setLevel(getLevel() + 1);
}

void Stuff::setId(int id) {
	this->id = id;
}
void Stuff::setName(string name) {
	this->name = name;
}
void Stuff::setLevel(int level) {
	this->level = level;
}
void Stuff::setPositionId(int positionId) {
	this->positionId = positionId;
}
int Stuff::getId() {
	return this->id;
}
string Stuff::getName() {
	return this->name;
}
int Stuff::getLevel() {
	return this->level;
}
int Stuff::getPositionId() {
	return this->positionId;
}