#pragma once
#include"Header.h"
#include"Employee.h"

class Departament
{
	string name;
	list<Employee*> empl;
public:
	Departament(string name)
	{
		this->name = name;
		
	}
	void AddEmployee(Employee * empl)
	{
		this->empl.push_back(empl);
	}
	void Show()
	{
		cout << "Depart: " << name << " ";
		if (empl.size() != 0)
		{
			for (auto element : empl)
			{
				element->Show();
				cout << endl;
			}
		}
	}
};
