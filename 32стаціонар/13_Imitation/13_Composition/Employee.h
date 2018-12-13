#pragma once
#include"Header.h"

class Employee
{
	string name;
public:
	Employee(string name)
	{
		this->name = name;
	}
	void Show()
	{
		cout << "Empl: " << name << " ";
	}
};
