#pragma once
#include"Header.h"
#include"Person.h"

class Employee : public Person
{
	double salary;
public:
	void SetSalary(double sal);
	double GetSalary();

	void Show()
	{
		Person::Show();
		cout << "I am employee";
	}
};

