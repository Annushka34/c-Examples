#pragma once
#include"Header.h"
#include"Departament.h"
#include"Employee.h"

class Firm
{
	Departament * d;
public:
	Firm()
	{
		d = new Departament("accounter");
	}
	void AddEmployee(Employee * e)
	{
		d->AddEmployee(e);
	}
	void Show()
	{
		d->Show();
		cout << endl;
	}
	~Firm()
	{
		delete d;
	}
};