#pragma once
#include"Header.h"
#include"Person.h"

class Child : protected Person
{
private:
	string toyName;
public:
	void SetToy(string toy);
	void ShowToy();
};
